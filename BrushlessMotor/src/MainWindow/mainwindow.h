/**
* @file mainwindow.h
* @brief The main interface of this brushless upper computer(to lower computer).
* @version 0.0
* @author LeatherWang
* @date 2017-11-01
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "scope.h"
#include "basicsetup.h"
#include "basicsetupwizard.h"
#include "current_loop.h"
#include "motorfeedback.h"
#include <QMainWindow>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QDebug>
#include <QTranslator>
#include <QTreeWidget>
#include <QDir>
#include "basicsetupwizard.h"

#define CONFIG_FILE_PATH "../config/"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_TransToEnglish_triggered();
    void on_action_TransToChinese_triggered();
    void on_pushButton_2_clicked();
    void on_action_OpenScope_triggered();
    void on_action_CreateModel_triggered();

    void on_treewidget_ServoMotor_customContextMenuRequested(const QPoint &pos);
    void DeleteItem();
    void RenameWell();
    void NameChanged(QTreeWidgetItem*  );

    void on_treewidget_ServoMotor_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void AddTreeChild(const QString &name);

    void on_pushbutton_CurrentLoop_clicked();
    void on_pushbutton_MotorFeedback_clicked();

    void on_action_BasicSetup_triggered();

private:
    Ui::MainWindow *ui;
    Scope *dialog_scope;

    QTreeWidgetItem *treewidget_top; //tree top

    QLabel *label_serial_status;
    QLabel *label_serial_num;
    QLabel *label_motor_status;

    void RefreshLanguage();
    bool InitStatusBar();
    bool InitTreeWidget();
    bool InitToolBar();
    bool DeleteDirectory(const QString &path);
};

#endif // MAINWINDOW_H
