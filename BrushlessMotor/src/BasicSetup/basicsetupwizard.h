#ifndef BASICSETUPWIZARD_H
#define BASICSETUPWIZARD_H

#include <QWizard>
#include <QDebug>
#include "basicsetupaccess.h"

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
    void on_radioButton_brushless_toggled(bool checked);
    void on_radioButton_rotary_toggled(bool checked);

signals:
    void signal_addTreeChild(const QString);

private:
    Ui::BasicSetupWizard *ui;
    QString modelName;
    BasicSetupAccess *basicSetupAccess;

    uchar beginPageID;
    uchar currentPageID;

    short basicSetupChanges;

    bool deleteDirectory(const QString &path);
    void setPreviewPage();
    void setWizardPage();
};

#endif // BASICSETUPWIZARD_H

