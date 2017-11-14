#include "basicsetupwizard.h"
#include "ui_basicsetupwizard.h"
#include <QMessageBox>
#include <QDir>
#include "amplifierconstants.h"

BasicSetupWizard::BasicSetupWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::BasicSetupWizard)
{
    ui->setupUi(this);
    this->setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint); //去掉帮助按钮
    this->setWizardStyle( QWizard::ModernStyle );

    if(BasicSetupDriver::isConfiguredMotor()){
        setPreviewPage(); //配置过的电机，有扉页
    }
    else{
        this->removePage(beginPageID);//移出扉页，但 page index 不变
        setWizardPage();
    }

    initData();
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
    if(BasicSetupDriver::isConfiguredMotor())
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

void BasicSetupWizard::initData()
{
    this->ampFeaturesCapable = BasicSetupDriver::getAmpFeaturesCapable();
    //initFlashDesiredState();
    //initPwmData();
    //initOpmodeOptions();
    this->combinedMtrFamilyType = BasicSetupDriver::getCombinedMotorFamilyType();
    this->savedCombinedMtrFamilyType = this->combinedMtrFamilyType;

    this->initHallsData();

    if(BasicSetupDriver::isConfiguredMotor()){
        ui->label_motorID->setText(BasicSetupDriver::getMotorID());
        ui->label_motorFamily->setText(QString::fromStdString(AmplifierConstants::getMotorFamilyString(this->getMotorFamily())));
        ui->label_motorType->setText(QString::fromStdString(AmplifierConstants::getMotorTypeString(this->getMotorType())));
//@TODO
    }

    initGui();
}

void BasicSetupWizard::initGui()
{
    if (this->getMotorFamily() == 48) {
        ui->radioButton_brushless->setChecked(true);
    } else {
        ui->radioButton_brush->setChecked(true);
    }

    if (this->getMotorType() == 0) {
        ui->radioButton_rotary->setChecked(true);
    } else {
        ui->radioButton_linear->setChecked(true);
    }
//@TODO
}

void BasicSetupWizard::initHallsData()
{
    if (this->isHallCapable())
    {
        this->hallType = 32;//@TODO,有点复杂
        this->savedHallType = this->hallType;
    }
//    if (this.hallPhaseCorrectionCapable)
//    {
//        this->hallPhaseCorrection = isHallCorrectionSet();
//        this->savedHallPhaseCorrection = this.hallPhaseCorrection;
//    }
}

   //this.motorEncoderOptionsCapable = isAmpMotorEncoderOptionsCapable();
   //this.backEmfCapable = isAmpBackEmfCapable();
   //this.hallVelCapable = isAmpHallVelocityCapable();
   //this.hallPosCapable = isAmpHallPositionCapable();
   //this.posEncCapable = isAmpPositionEncoderCapable();
   //this.encOutCapable = isAmpEncoderOutputCapable();
   //this.mtrEncCapable = isAmpMotorEncoderCapable();
   //this.phaseModeCapable = isAmpPhaseModeCapable();
   //this->hallCapable = isAmpHallsCapable();
   //this->hallPhaseCorrectionCapable = BasicSetupDriver::isAmpSinNoCorrectCapable();

void BasicSetupWizard::setMotorFamily(short family)
{
    this->combinedMtrFamilyType = (this->combinedMtrFamilyType & 0xFFFFFFCF | family);
/*    switch (family)
    {
    case 16:
        setHallType((short)0);
        break;
    case 32:
        if (!AmplifierConstants.isAmpStepper(this.hwType)) {
            this.phaseMode = 0;
        }
        break;
    default:
        if (isThreePhaseStepperMode()) {
            this.phaseMode = 0;
        } else if (this.motorEnc == 1) {
            this.phaseMode = 4;
        } else {
            this.phaseMode = 5;
        }
        break;
    }*/
}

short BasicSetupWizard::getMotorFamily()
{
    return (short)(this->combinedMtrFamilyType & 0x30);
}

void BasicSetupWizard::setMotorType(short type)
{
  this->combinedMtrFamilyType = (this->combinedMtrFamilyType & 0xFFFFFFFE | type);
}

short BasicSetupWizard::getMotorType()
{
    return (short)(this->combinedMtrFamilyType & 0x01);
}

bool BasicSetupWizard::isHallCapable()
{
    return bool(this->ampFeaturesCapable & 0x01);
}

void BasicSetupWizard::on_radioButton_brushless_clicked()
{
    this->setMotorFamily((short)48);
}

void BasicSetupWizard::on_radioButton_brush_clicked()
{
    this->setMotorFamily((short)16);
}

void BasicSetupWizard::on_radioButton_rotary_clicked()
{
    this->setMotorType((short)0);
}

void BasicSetupWizard::on_radioButton_linear_clicked()
{
    this->setMotorType((short)1);
}
