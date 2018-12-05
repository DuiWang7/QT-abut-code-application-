#ifndef GEREN_H
#define GEREN_H
#include<QDateTime>
#include <QWidget>
#include<QString>
namespace Ui {
class geren;
}

class geren : public QWidget
{
    Q_OBJECT

public:
    explicit geren(QWidget *parent = 0);
    QString file_name_;
    QDateTime time_;
    void closeEvent(QCloseEvent *event);
    QString result;
    ~geren();

private slots:
    void on_xuanzepushbutton_clicked();

    void on_xuanzepushbutton_2_clicked();
    void timerupdate(void);
private:
    Ui::geren *ui;
};

#endif // GEREN_H
