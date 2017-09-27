#ifndef WIZARD_SETTING_H
#define WIZARD_SETTING_H

#include <QWizard>
#include <QSettings>
#include <QDebug>

namespace Ui {
class Wizard_Setting;
}

class Wizard_Setting : public QWizard
{
    Q_OBJECT

public:
    explicit Wizard_Setting(QWidget *parent = 0);
    ~Wizard_Setting();



private slots:
    void on_Wizard_Setting_currentIdChanged(int id);

    void on_Wizard_Setting_finished(int result);

signals:
    void Signal_AddTreeChild(const QString);

private:
    Ui::Wizard_Setting *ui;

    QSettings *settings;
    QString modelName;

    bool DeleteDirectory(const QString &path);
};

#endif // WIZARD_SETTING_H
