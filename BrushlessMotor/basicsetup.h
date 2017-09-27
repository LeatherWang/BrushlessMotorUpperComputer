#ifndef BASICSETUP_H
#define BASICSETUP_H

#include <QWidget>

namespace Ui {
class BasicSetup;
}

class BasicSetup : public QWidget
{
    Q_OBJECT

public:
    explicit BasicSetup(QWidget *parent = 0);
    ~BasicSetup();

private:
    Ui::BasicSetup *ui;
};

#endif // BASICSETUP_H
