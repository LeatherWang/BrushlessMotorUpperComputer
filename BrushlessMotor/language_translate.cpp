#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::LanguageRefresh()
{
    ui->pushButton->setText(tr("打开"));
    ui->pushButton_2->setText(tr("关闭"));
    ui->menu->setTitle(tr("文件"));
    ui->menu_language->setTitle(tr("语言"));
    ui->action_serial->setText(tr("串口配置"));
    ui->action_exit->setText(tr("退出"));
}

void MainWindow::on_action_TransToEnglish_triggered()
{
    QTranslator translator;
    if( translator.load("../BrushlessMotor/BlessM_en_CN.qm") )
    {
        qApp->installTranslator(&translator);
        this->LanguageRefresh();
        ui->action_TransToEnglish->setChecked(1);
        ui->action_TransToChinese->setChecked(0);
    }
}

void MainWindow::on_action_TransToChinese_triggered()
{
    QTranslator translator;
    if( translator.load("../BrushlessMotor/BlessM_zh_CN.qm") )
    {
        qApp->installTranslator(&translator);
        this->LanguageRefresh();
        ui->action_TransToEnglish->setChecked(0);
        ui->action_TransToChinese->setChecked(1);
    }
}
