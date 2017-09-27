#include "wizard_setting.h"
#include "ui_wizard_setting.h"
#include <QMessageBox>
#include <QDir>

Wizard_Setting::Wizard_Setting(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::Wizard_Setting)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("无刷驱动器设置向导"));
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint); //去掉帮助按钮
    this->setWizardStyle( QWizard::ModernStyle );
    this->setButtonText(QWizard::BackButton, QString(tr("上一步")));
    this->setButtonText(QWizard::NextButton, QString(tr("下一步")));
    this->setButtonText(QWizard::FinishButton, QString(tr("完成")));
    this->setButtonText(QWizard::CancelButton, QString(tr("取消")));
    this->setModal(true);
}

Wizard_Setting::~Wizard_Setting()
{
    delete ui;
}

void Wizard_Setting::on_Wizard_Setting_currentIdChanged(int id)
{
    static int lastId;
    if((id == 1) && (lastId == 0)) //0->1
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
        settings = new QSettings(iniFilePath, QSettings::IniFormat);
        settings->setValue(QString("%1/ID").arg(modelName), ui->comboBox_brushlessID->currentText());
    }
    lastId = id;
}

void Wizard_Setting::on_Wizard_Setting_finished(int result)
{
    if(result == 1)
        emit this->Signal_AddTreeChild(modelName);
    else
    {
        DeleteDirectory(QString("../BrushlessMotor/config/%1/").arg(modelName));
    }
}

bool Wizard_Setting::DeleteDirectory(const QString &path)
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
