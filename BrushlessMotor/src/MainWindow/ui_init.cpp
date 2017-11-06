#include "mainwindow.h"
#include "ui_mainwindow.h"

bool MainWindow::InitStatusBar()
{
    /*当前已打开串口状态栏*/
    label_serial_num = new QLabel;
    label_serial_num->setMinimumSize(50, 20); // 设置标签最小大小
    label_serial_num->setFrameShape(QFrame::WinPanel); // 设置标签形状
    label_serial_num->setFrameShadow(QFrame::Sunken); // 设置标签阴影
    ui->statusBar->addWidget(label_serial_num);
    label_serial_num->setText(tr("<font color='black'>COM1</font>"));

    /*初始化串口状态栏*/
    label_serial_status = new QLabel;
    label_serial_status->setMinimumSize(50, 20); // 设置标签最小大小
    label_serial_status->setFrameShape(QFrame::WinPanel); // 设置标签形状
    label_serial_status->setFrameShadow(QFrame::Sunken); // 设置标签阴影
    ui->statusBar->addWidget(label_serial_status);
    label_serial_status->setText(tr("<font color='red'>串口未打开！</font>"));

    /*初始化电机状态栏*/
    label_motor_status = new QLabel;
    label_motor_status->setMinimumSize(50, 20); // 设置标签最小大小
    label_motor_status->setFrameShape(QFrame::WinPanel); // 设置标签形状
    label_motor_status->setFrameShadow(QFrame::Sunken); // 设置标签阴影
    ui->statusBar->addWidget(label_motor_status);
    label_motor_status->setText(tr("<font color='green'>电机状态正常</font>"));

    /*初始化永久状态栏*/
//    QLabel *permanent = new QLabel;
//    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
//    permanent->setText("<a href=\"http://www.neuaction.com\">www.neuaction.com</a>");
//    permanent->setTextFormat(Qt::RichText);
//    permanent->setOpenExternalLinks(true);
//    ui->statusBar->addPermanentWidget(permanent);

    return true;
}

bool MainWindow::InitToolBar()
{

//    ui->action_ErrorLog->setIcon(QIcon("F:/MyData/GitHubData/BrushlessMotor/BrushlessMotor/"
//                                        "image/clipboard_24px_1133596_easyicon.net.png"));//:/image/image/setting_24px_526011_easyicon.net.png已由界面中完成
    return true;
}
