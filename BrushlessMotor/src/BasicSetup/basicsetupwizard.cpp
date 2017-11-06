#include "basicsetupwizard.h"
#include "ui_basicsetupwizard.h"
#include <QMessageBox>
#include <QDir>

BasicSetupWizard::BasicSetupWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::BasicSetupWizard)
{
    ui->setupUi(this);
    configFilePath = QString("../config/") + QString("%1/%1.ini").arg("arm"); //@TODO

    if(configFilePath.isEmpty())
    {
        qDebug()<<"[ERROR]: configFilePath is error";
        return;
    }
    qDebug()<<configFilePath;

    basicSetupAccess = new BasicSetupAccess(configFilePath);
    beginPageID = currentPageID = 0;
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint); //去掉帮助按钮
    this->setWizardStyle( QWizard::ModernStyle );
    if(this->basicSetupAccess->isConfiguredMotor())
    {
        setPreviewPage(); //配置过的电机，有扉页
        ui->label_motorID->setText(this->basicSetupAccess->getMotorID());
        ui->label_motorFamily->setText(QString(this->basicSetupAccess->getMotorFamily()));
        ui->label_motorType->setText(QString(this->basicSetupAccess->getMotorType()));
    }
    else
    {
        this->removePage(beginPageID);//移出扉页，但 page index 不变
        setWizardPage();
    }

    this->setModal(true);
}

BasicSetupWizard::~BasicSetupWizard()
{
    delete ui;
}

/**
* @brief this is a slot.
* @function if isConfiguredMotor() return ture,
*           id: 0->1 setWizardPage
*               1->0 setPreviewPage
* @param no
* @return no
*/
void BasicSetupWizard::on_BasicSetupWizard_currentIdChanged(int id)
{
    static int s_last_id; //静态变量前加 s_
    qDebug()<<id;
    if(this->basicSetupAccess->isConfiguredMotor())
    {
        if((id == 1) && (s_last_id == 0))
            setWizardPage();
        else if((id == 0) && (s_last_id == 1))
            setPreviewPage();
    }

    if((id == 2) && (s_last_id == 1)) //0->1
    {
        if(ui->lineEdit_modelName->text().isEmpty())
        {
            this->back();
            QMessageBox::warning(this, QStringLiteral("错误"), QStringLiteral("名称不能为空！！！"));
            return;
        }
        modelName = ui->lineEdit_modelName->text();
        QString iniFilePath = QString("../BrushlessMotor/config/%1/%1.ini").arg(modelName);
        qDebug()<<iniFilePath;
    }

    s_last_id = id;
}

void BasicSetupWizard::on_BasicSetupWizard_finished(int result)
{
    if(result == 1)
        emit this->signal_addTreeChild(modelName); //TODO
    else
    {
        if(!modelName.isEmpty()) //未配置完成的结束，则删除
            deleteDirectory(QString("../BrushlessMotor/config/%1/").arg(modelName));
    }
}

bool BasicSetupWizard::deleteDirectory(const QString &path)
{
    if(path.isEmpty())
        return false;
    QDir dir(path);
    if(!dir.exists())
        return true;
    dir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot); //设置过滤
    const QFileInfoList fileList = dir.entryInfoList(); // 获取所有的文件信息
    foreach(QFileInfo fi, fileList) //遍历文件信息
    {
        if (fi.isFile()) //文件：file 文件夹：folder
            fi.dir().remove(fi.fileName());
        else
            deleteDirectory(fi.absoluteFilePath()); //递归删除
    }
    return dir.rmpath(dir.absolutePath()); //删除绝对路径，如果非空的话
}

void BasicSetupWizard::setPreviewPage()
{
    this->setWindowTitle(tr("基本设置"));
    this->setButtonText(QWizard::BackButton, QString(tr("")));
    this->setButtonText(QWizard::NextButton, QString(tr("更改设置")));
    this->setButtonText(QWizard::CancelButton, QString(tr("取消")));
}

void BasicSetupWizard::setWizardPage()
{
    this->setWindowTitle(tr("设置向导"));
    this->setButtonText(QWizard::BackButton, QString(tr("上一步")));
    this->setButtonText(QWizard::NextButton, QString(tr("下一步")));
    this->setButtonText(QWizard::FinishButton, QString(tr("完成")));
    this->setButtonText(QWizard::CancelButton, QString(tr("取消")));
}

void BasicSetupWizard::on_radioButton_brushless_toggled(bool checked)
{
    Q_UNUSED(checked);
    //    if(ui->radioButton_brushless->isChecked())
    //        this->setMotorFamily(48);
    //    else if(ui->radioButton_brush->isChecked())
    //        this->setMotorFamily(16);
    //    else
    //        qDebug()<<"[ERROR]:on_radioButton_brushless_toggled()";
}

void BasicSetupWizard::on_radioButton_rotary_toggled(bool checked)
{
    Q_UNUSED(checked);
    //    if(ui->radioButton_linear->isChecked())
    //        this->setMotorType(1);
    //    else if(ui->radioButton_rotary->isChecked())
    //        this->setMotorType(0);
    //    else
    //        qDebug()<<"[ERROR]:on_radioButton_rotary_toggled()";
}
