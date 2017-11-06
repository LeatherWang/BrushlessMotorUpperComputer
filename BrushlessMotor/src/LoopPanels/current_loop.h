/**
* @file current_loop.h
* @brief The setting panel of Current loop.
* .......
* @version 0.0
* @author LeatherWang
* @date 2017-11-01
*/

#ifndef CURRENT_LOOP_H
#define CURRENT_LOOP_H

#include <QWidget>

namespace Ui {
class Current_Loop;
}

class Current_Loop : public QWidget
{
    Q_OBJECT

public:
    explicit Current_Loop(QWidget *parent = 0);
    ~Current_Loop();

private:
    Ui::Current_Loop *ui;
};

#endif // CURRENT_LOOP_H
