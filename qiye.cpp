#include "qiye.h"
#include "ui_qiye.h"
#include<QTimer>
#include<QDateTime>
#include<string>
#include<QFileDialog>
#include<QDebug>
#include<QImage>
#include<QTextCodec>
#include<QZXing>
#include"res.h"
#include<QPixmap>
#include<QCloseEvent>
#include"kaishi.h"
qiye::qiye(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qiye)
{
    ui->setupUi(this);
    this->setFixedSize(990,756);
    QTimer *timer = new QTimer(this);
    time_ = QDateTime::currentDateTime();
    QString str = time_.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->datelabel->setText(str);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerupdate()));
    timer->start(1000);
}
void qiye::timerupdate(void)
{
    time_ = QDateTime::currentDateTime();
    QString str = time_.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->datelabel->setText(str);
}
qiye::~qiye()
{
    delete ui;
}
void qiye::on_xuanzepushbutton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(NULL,"code所在文件路径",".","");
    qDebug() << file_name;
    file_name_=file_name;
    int w=file_name.length();
    qDebug()<<w;
    int i;
    for(i=w-1;i>0;i--)
    {
        if(file_name[i]=='/')
            break;
    }
    file_name=file_name.mid(i+1);
    ui->wenjian->setText(file_name);
    QPixmap codepic(file_name_);
    ui->pic->setScaledContents(true);
    ui->pic->setPixmap(codepic);

}

void qiye::on_xuanzepushbutton_2_clicked()
{
    QImage imageToDecode(file_name_);
    QZXing decoder;
    result = decoder.decodeImage(imageToDecode);
    qDebug()<<result;
    res *w=new res(result);
    w->show();
}
void qiye::closeEvent(QCloseEvent *event)
{
    this->close();
    kaishi *w=new kaishi();
    w->show();
}
