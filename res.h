#ifndef RES_H
#define RES_H

#include <QWidget>
#include<QString>
namespace Ui {
class res;
}

class res : public QWidget
{
    Q_OBJECT

public:
    explicit res(QString res_,QWidget *parent = 0);
    QString out1;
    QString out2;
    QString out3;
    QString jiben1;
    QString jiben2;
    QString jiben3;
    ~res();

private:
    Ui::res *ui;
};

#endif // RES_H
