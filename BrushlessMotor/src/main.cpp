#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QMutex>
#include <QFile>
#include <QDateTime>
#include "qglobal.h"
#include <stdio.h>
#include <stdlib.h>
#include <QMessageBox>

void outputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    static QMutex mutex;
    mutex.lock();

    QString text;
    switch(type)
    {
    case QtDebugMsg:
        text = QString("Debug:");
        printf(msg.toLatin1().data()); //debug消息打印出来
        fflush(stdout);
        break;

    case QtWarningMsg:
        text = QString("Warning:");
        break;

    case QtCriticalMsg:
        text = QString("Critical:");
        break;

    case QtFatalMsg:
        text = QString("Fatal:");
        break;

    case QtInfoMsg:
        text = QString("Info:");
        break;
    }

    QString context_info = QString("File:(%1) Line:(%2)").arg(QString(context.file)).arg(context.line);
    QString current_date_time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd");
    QString current_date = QString("(%1)").arg(current_date_time);
    QString message = QString("%1 %2 %3 %4").arg(text).arg(context_info).arg(msg).arg(current_date);

    QFile file("log.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream text_stream(&file);
    text_stream << message << "\r\n";
    file.flush();
    file.close();

    mutex.unlock();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //qInstallMessageHandler(outputMessage);//注册MessageHandler,截取调试信息
    /*qDebug("The app starts running!"); //打印日志到文件中
    qDebug("This is a debug message");
    qWarning("This is a warning message");
    qCritical("This is a critical message");
    qFatal("This is a fatal message");*/

    QTranslator translator;
    translator.load("../language/BlessM_ch_CN.qm"); //翻译文件加载的位置必须在界面实例化之前完成

    a.installTranslator(&translator);
    MainWindow w;
    w.show();

    return a.exec();
}
