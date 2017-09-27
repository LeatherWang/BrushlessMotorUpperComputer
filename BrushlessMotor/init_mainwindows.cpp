#include "mainwindow.h"
#include "ui_mainwindow.h"

bool MainWindow::InitStatusBar()
{
    /*当前已打开串口状态栏*/
    statusLabel_SerialNum = new QLabel;
    statusLabel_SerialNum->setMinimumSize(50, 20); // 设置标签最小大小
    statusLabel_SerialNum->setFrameShape(QFrame::WinPanel); // 设置标签形状
    statusLabel_SerialNum->setFrameShadow(QFrame::Sunken); // 设置标签阴影
    ui->statusBar->addWidget(statusLabel_SerialNum);
    statusLabel_SerialNum->setText(tr("<font color='black'>COM1</font>"));

    /*初始化串口状态栏*/
    statusLabel_Serial = new QLabel;
    statusLabel_Serial->setMinimumSize(50, 20); // 设置标签最小大小
    statusLabel_Serial->setFrameShape(QFrame::WinPanel); // 设置标签形状
    statusLabel_Serial->setFrameShadow(QFrame::Sunken); // 设置标签阴影
    ui->statusBar->addWidget(statusLabel_Serial);
    statusLabel_Serial->setText(tr("<font color='red'>串口未打开！</font>"));

    /*初始化电机状态栏*/
    statusLabel_Motor = new QLabel;
    statusLabel_Motor->setMinimumSize(50, 20); // 设置标签最小大小
    statusLabel_Motor->setFrameShape(QFrame::WinPanel); // 设置标签形状
    statusLabel_Motor->setFrameShadow(QFrame::Sunken); // 设置标签阴影
    ui->statusBar->addWidget(statusLabel_Motor);
    statusLabel_Motor->setText(tr("<font color='green'>电机状态正常</font>"));

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
    ui->action_OpenScope->setIcon(QIcon(":/image/image/scope.png"));
    return true;
}
