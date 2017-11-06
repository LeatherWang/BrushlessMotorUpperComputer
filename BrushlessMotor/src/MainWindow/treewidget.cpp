#include "mainwindow.h"
#include "ui_mainwindow.h"

bool MainWindow::InitTreeWidget()
{
    ui->treewidget_ServoMotor->setColumnWidth(0, 150);
    treewidget_top = new QTreeWidgetItem(ui->treewidget_ServoMotor, QStringList(QString("Servo Motor")));

    QString path = CONFIG_FILE_PATH;
    if(path.isEmpty())
        return false;
    QDir dir(path);
    if(!dir.exists())
        return false;
    dir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot); //设置过滤
    dir.setSorting(QDir::Name | QDir::Reversed); //顺序：旧->新
    const QFileInfoList fileList = dir.entryInfoList(); // 获取所有的文件信息
    foreach (QFileInfo fi, fileList) //遍历文件信息
    {
        if (!fi.isFile()) //文件：file 文件夹：folder
        {
            this->AddTreeChild(fi.fileName());
        }
    }

    ui->treewidget_ServoMotor->expandAll();
    return true;
}

void MainWindow::AddTreeChild(const QString &name)
{
    QTreeWidgetItem *treeItems = new QTreeWidgetItem(treewidget_top, QStringList(QString("%1").arg(name))); //子节点1
    treeItems->setIcon(0, QIcon(":/image/../image/disconnected.png"));
    //treeItems->setFlags(treeItems->flags() | Qt::ItemIsEditable); //设置为可编辑
    treewidget_top->addChild(treeItems); //添加子节点
}

void MainWindow::on_treewidget_ServoMotor_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    Q_UNUSED(column);
    QTreeWidgetItem *parent = item->parent();
    if(NULL == parent) //注意：最顶端项是没有父节点的，双击这些项时注意(陷阱)
        return;
    int row = parent->indexOfChild(item); //item在父项中的节点行号(从0开始)
    if(0==row) //Band1
        qDebug()<<0;//执行对应操作
    QString iniFilePath = CONFIG_FILE_PATH + QString("%1/%1.ini").arg(item->text(0));
    QSettings settings(iniFilePath, QSettings::IniFormat);
    ui->label_ID->setText(settings.value(QString("ID")).toString());
}

/******************************
 * 右击事件
 ******************************/
void MainWindow::on_treewidget_ServoMotor_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QTreeWidgetItem* curItem=ui->treewidget_ServoMotor->currentItem();  //获取当前被点击的节点
    if(curItem == NULL) return;           //这种情况是右键的位置不在treeItem的范围内，即在空白位置右击
    QString wellName = curItem->text(0);
    if(wellName != "Servo Motor")
    {
        QAction deleteWell(QString(tr("删除该井")), this);//删除井
        //QAction reNameWell(QString(tr("重命名井")), this);//重命名井
        //在界面上删除该item
        connect(&deleteWell, SIGNAL(triggered()), this, SLOT(DeleteItem()));
        //connect(&reNameWell, SIGNAL(triggered()), this, SLOT(renameWell()));

        //QPoint pos;
        QMenu menu(ui->treewidget_ServoMotor);
        //menu.addAction(&reNameWell);
        menu.addAction(&deleteWell);
        menu.exec(QCursor::pos());  //在当前鼠标位置显示
    }
}

void MainWindow::DeleteItem()
{
    //删除井数据文件
    QString dirPath = CONFIG_FILE_PATH;
    dirPath.append(ui->treewidget_ServoMotor->currentItem()->text(0));
    dirPath.append("/");

    treewidget_top->removeChild(ui->treewidget_ServoMotor->currentItem());
    DeleteDirectory(dirPath);//实现在下面
}

bool MainWindow::DeleteDirectory(const QString &path)
{
    if(path.isEmpty())
        return false;
    QDir dir(path);
    if(!dir.exists())
        return true;
    dir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot); //设置过滤
    const QFileInfoList fileList = dir.entryInfoList(); // 获取所有的文件信息
    foreach (QFileInfo fi, fileList) //遍历文件信息
    {
        if (fi.isFile()) //文件：file 文件夹：folder
            fi.dir().remove(fi.fileName());
        else
            DeleteDirectory(fi.absoluteFilePath()); //递归删除
    }

    return dir.rmpath(dir.absolutePath()); //删除绝对路径，如果非空的话
}

QString preName;
QString prePath;
void MainWindow::RenameWell()
{
    preName = ui->treewidget_ServoMotor->currentItem()->text(0);
    prePath = CONFIG_FILE_PATH;
    prePath.append(preName);

    disconnect(ui->treewidget_ServoMotor, SIGNAL(itemChanged( QTreeWidgetItem *,int )),
            this, SLOT(NameChanged(QTreeWidgetItem*  )));

    if(!(ui->treewidget_ServoMotor->currentItem()->flags() & Qt::ItemIsEditable))
        ui->treewidget_ServoMotor->currentItem()->setFlags(ui->treewidget_ServoMotor->currentItem()->flags() | Qt::ItemIsEditable);
    ui->treewidget_ServoMotor->editItem(ui->treewidget_ServoMotor->currentItem());
    connect(ui->treewidget_ServoMotor, SIGNAL(itemChanged( QTreeWidgetItem *,int )),
            this, SLOT(NameChanged(QTreeWidgetItem*  ))); //通过监控itemChanged事件来确定修改后的名字！！！！
}

void MainWindow::NameChanged(QTreeWidgetItem* item)
{
    qDebug()<<"change";

    disconnect(ui->treewidget_ServoMotor, SIGNAL(itemChanged( QTreeWidgetItem *,int )),
            this, SLOT(NameChanged(QTreeWidgetItem*  )));
    ui->treewidget_ServoMotor->currentItem()->setFlags(ui->treewidget_ServoMotor->currentItem()->flags() & (~Qt::ItemIsEditable));
    //先重命名文件夹
    /*QString newName = item->text(0);
    QString newPath = "../BrushlessMotor/config/";
    newPath.append(newName);

    QFile::rename(prePath, newPath);

    prePath = newPath.append("/");
    prePath.append(preName);
    prePath.append(".txt");
    //重命名井眼轨迹处理后的文件
    newPath.append("/");
    newPath.append(newName);
    newPath.append(".txt");
    QFile::rename(prePath,newPath);*/
}

