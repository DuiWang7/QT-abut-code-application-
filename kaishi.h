#ifndef KAISHI_H
#define KAISHI_H

#include <QWidget>

namespace Ui {
class kaishi;
}

class kaishi : public QWidget
{
    Q_OBJECT

public:
    explicit kaishi(QWidget *parent = 0);
    ~kaishi();

private slots:
    void on_gerenpushbutton_clicked();

    void on_qiyepushbutton_clicked();

private:
    Ui::kaishi *ui;
};

#endif // KAISHI_H
