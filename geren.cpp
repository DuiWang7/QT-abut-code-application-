#include "geren.h"
#include "ui_geren.h"
#include<QTimer>
#include<QDateTime>
#include<string>
#include<QFileDialog>
#include<QDebug>
#include<QImage>
#include<QTextCodec>
#include<QZXing>
#include<QPixmap>
#include<QMessageBox>
#include <QDesktopServices>
#include<QString>
#include<kaishi.h>
geren::geren(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::geren)
{
    ui->setupUi(this);
    this->setFixedSize(916,642);
    QTimer *timer = new QTimer(this);
    time_ = QDateTime::currentDateTime();
    QString str = time_.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->datelabel->setText(str);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerupdate()));
    timer->start(1000);
}
void geren::timerupdate(void)
{
    time_ = QDateTime::currentDateTime();
    QString str = time_.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->datelabel->setText(str);
}
geren::~geren()
{
    delete ui;
}

void geren::on_xuanzepushbutton_clicked()
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
    ui->codepic->setScaledContents(true);
    ui->codepic->setPixmap(codepic);
}

void geren::on_xuanzepushbutton_2_clicked()
{
    qDebug()<<"success";
    QImage imageToDecode(file_name_);
    QZXing decoder;
    result = decoder.decodeImage(imageToDecode);
    int i;
    int w=result.length();
    qDebug()<<w;
    QString name;
    QString net_;
    QString key=result.mid(w-8);
    qDebug()<<key;
    if(key=="19970302")
    {
        for(int i=0;i<w-8;i++)
        {
            if(result[i]=="灬")
            {
                 name=result.mid(-1,i+1);
                 net_=result.mid(i+1,w-9-i);
                 qDebug()<<net_;
                 qDebug()<<name;
            }
        }
        QMessageBox::StandardButton button;
        button=QMessageBox::question(this,tr("获取操作权限"),"提示：该二维码符合加密标准，所属人为："+name+" 是否继续访问？",QMessageBox::Yes|QMessageBox::No);
        if(button==QMessageBox::Yes)
        {
                  QDesktopServices::openUrl(QUrl(QString("http://"+net_)));
        }
    }
    else
    {
        QMessageBox::about(NULL, "警告", "该二维码不符合加密算法！已被阻止");
    }
    qDebug()<<result;
}
void geren::closeEvent(QCloseEvent *event)
{
    this->close();
    kaishi *w=new kaishi();
    w->show();
}
