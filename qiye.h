#ifndef QIYE_H
#define QIYE_H
#include<QDateTime>
#include <QWidget>
#include<QString>
#include<QCloseEvent>
namespace Ui {
class qiye;
}

class qiye : public QWidget
{
    Q_OBJECT

public:
    explicit qiye(QWidget *parent = 0);
    QDateTime time_;
    QString file_name_;
    QString result;
    void travel(QString res);
    void closeEvent(QCloseEvent *event);
    ~qiye();
public slots:
    void timerupdate(void);
private slots:
    void on_xuanzepushbutton_clicked();

    void on_xuanzepushbutton_2_clicked();

private:
    Ui::qiye *ui;
};

#endif // QIYE_H
