#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QDebug>
#include <QTranslator>
#include <QTreeWidget>
#include "scope.h"
#include "basicsetup.h"
#include "wizard_setting.h"
#include "i_loopsetting.h"
#include "motorfeedback.h"
#include <QDir>

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
    void on_action_NewModel_triggered();

    void on_treeWidget_Brushless_customContextMenuRequested(const QPoint &pos);
    void deleteItem();
    void renameWell();
    void nameChanged(QTreeWidgetItem*  );

    void on_treeWidget_Brushless_itemClicked(QTreeWidgetItem *item, int column);
    void AddTreeChild(const QString &name);

    void on_pushbutton_I_loop_clicked();

    void on_pushbutton_MotorFeedback_clicked();

private:
    Ui::MainWindow *ui;
    Scope *dialog_scope;
    BasicSetup *dialog_basicSetup;
    QTreeWidgetItem *treeTop_ACTION; //tree top

    QLabel *statusLabel_Serial;
    QLabel *statusLabel_SerialNum;
    QLabel *statusLabel_Motor;

    void LanguageRefresh();
    bool InitStatusBar();
    bool InitTreeWidget();
    bool InitToolBar();

    bool DeleteDirectory(const QString &path);
    QString configFilePath;
};

#endif // MAINWINDOW_H
