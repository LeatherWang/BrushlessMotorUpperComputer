#ifndef MOTORFEEDBACK_H
#define MOTORFEEDBACK_H

#include <QWidget>

namespace Ui {
class MotorFeedback;
}

class MotorFeedback : public QWidget
{
    Q_OBJECT

public:
    explicit MotorFeedback(QWidget *parent = 0);
    ~MotorFeedback();

private:
    Ui::MotorFeedback *ui;
};

#endif // MOTORFEEDBACK_H
