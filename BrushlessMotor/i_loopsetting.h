#ifndef I_LOOPSETTING_H
#define I_LOOPSETTING_H

#include <QWidget>

namespace Ui {
class I_LoopSetting;
}

class I_LoopSetting : public QWidget
{
    Q_OBJECT

public:
    explicit I_LoopSetting(QWidget *parent = 0);
    ~I_LoopSetting();

private:
    Ui::I_LoopSetting *ui;
};

#endif // I_LOOPSETTING_H
