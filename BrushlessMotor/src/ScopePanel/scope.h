#ifndef SCOPE_H
#define SCOPE_H

#include <QWidget>

namespace Ui {
class Scope;
}

class Scope : public QWidget
{
    Q_OBJECT

public:
    explicit Scope(QWidget *parent = 0);
    ~Scope();

    bool openFlag;

protected:
     void closeEvent(QCloseEvent *event);

private:
    Ui::Scope *ui;
};

#endif // SCOPE_H
