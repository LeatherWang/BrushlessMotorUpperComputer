#ifndef BASICSETUPWIZARD_H
#define BASICSETUPWIZARD_H

#include <QWizard>
#include <QDebug>
#include "basicsetupdriver.h"

namespace Ui {
class BasicSetupWizard;
}

class BasicSetupWizard : public QWizard
{
    Q_OBJECT

public:
    explicit BasicSetupWizard(QWidget *parent = 0);
    ~BasicSetupWizard();
    QString configFilePath;

private slots:
    void on_BasicSetupWizard_finished(int result);
    void on_BasicSetupWizard_currentIdChanged(int id);
    void on_radioButton_brushless_clicked();
    void on_radioButton_brush_clicked();
    void on_radioButton_rotary_clicked();
    void on_radioButton_linear_clicked();

signals:
    void signal_addTreeChild(const QString);

private:
    Ui::BasicSetupWizard *ui;
    QString modelName;

    const int beginPageID=0;//默认起始页码

    short basicSetupChanges;
    int combinedMtrFamilyType, savedCombinedMtrFamilyType;
    short hallType, savedHallType;

    //bool backEmfCapable;
    //bool hallVelCapable;
    //bool hallPosCapable;
    //bool mtrEncCapable;
    //bool posEncCapable;
    //bool encOutCapable;
    //bool phaseModeCapable;
    //bool motorEncoderOptionsCapable; //电机编码器使能
    //bool hallCapable; //霍尔使能
    //bool hallPhaseCorrectionCapable;
    short ampFeaturesCapable;//使能标志位

    bool deleteDirectory(const QString &path);
    void setPreviewPage();
    void setWizardPage();

    void initData();
    void initAmpFeaturesSet(); //初始化点击features
    void initHallsData();
    bool isHallCapable();

    short getMotorFamily();
    short getMotorType();

    void setMotorType(short type);
    void setMotorFamily(short family);

    void initGui();
};

#endif // BASICSETUPWIZARD_H

