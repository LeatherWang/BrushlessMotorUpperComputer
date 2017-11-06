#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

void MainWindow::on_action_CreateModel_triggered()
{
    BasicSetupWizard *dialog_setting = new BasicSetupWizard;
    connect(dialog_setting, SIGNAL(signal_addTreeChild(QString)), this, SLOT(AddTreeChild(QString)));
    dialog_setting->show();
}

void MainWindow::on_pushbutton_CurrentLoop_clicked()
{
    Current_Loop *current_loop = new Current_Loop;
    current_loop->setWindowModality(Qt::ApplicationModal);
    current_loop->show();
}

void MainWindow::on_pushbutton_MotorFeedback_clicked()
{
    MotorFeedback *motorFeedback = new MotorFeedback;
    motorFeedback->setWindowModality(Qt::ApplicationModal);
    motorFeedback->show();
}

void MainWindow::on_action_BasicSetup_triggered()
{
    BasicSetupWizard *basicSetupWizard = new BasicSetupWizard;
    basicSetupWizard->setWindowModality(Qt::ApplicationModal);
    basicSetupWizard->show();
}
