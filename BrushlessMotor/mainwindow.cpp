#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    configFilePath = "../BrushlessMotor/config/";

    InitToolBar();
    InitStatusBar();
    InitTreeWidget();

    dialog_scope = new Scope;
    //connect(ui->listWidget,SIGNAL(currentRowChanged(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_action_OpenScope_triggered()
{
    dialog_scope->show();
    dialog_scope->openFlag = true;
}

void MainWindow::on_action_NewModel_triggered()
{
    Wizard_Setting *dialog_setting = new Wizard_Setting;
    connect(dialog_setting, SIGNAL(Signal_AddTreeChild(QString)), this, SLOT(AddTreeChild(QString)));
    dialog_setting->show();
}

void MainWindow::on_pushbutton_I_loop_clicked()
{
    I_LoopSetting *I_loopDialog = new I_LoopSetting;
    I_loopDialog->setWindowModality(Qt::ApplicationModal);
    I_loopDialog->show();
}

void MainWindow::on_pushbutton_MotorFeedback_clicked()
{
    MotorFeedback *motorFeedback = new MotorFeedback;
    motorFeedback->setWindowModality(Qt::ApplicationModal);
    motorFeedback->show();
}
