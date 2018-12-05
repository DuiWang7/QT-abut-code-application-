#include "kaishi.h"
#include "ui_kaishi.h"
#include"qiye.h"
#include<QMovie>
#include"geren.h"
kaishi::kaishi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kaishi)
{
    ui->setupUi(this);
    this->setFixedSize(771,595);
    this->setWindowTitle("欢迎使用米勒系统");
    /*QPalette p=this->palette();
    this->setAutoFillBackground(true);
    QPixmap pic=QPixmap(":/new/prefix1/kaishiback").scaled(this->size());
    p.setBrush(QPalette::Background,QBrush(pic));
    this->setPalette(p);*/
    QMovie *kaishi=new QMovie(":/new/prefix1/素材/背景.gif");
    kaishi->setScaledSize(ui->beijing->size());
    ui->beijing->setMovie(kaishi);
    kaishi->start();
}

kaishi::~kaishi()
{
    delete ui;
}

void kaishi::on_gerenpushbutton_clicked()
{
    this->close();
    geren *w=new geren();
    w->show();
}

void kaishi::on_qiyepushbutton_clicked()
{
    this->close();
    qiye *w=new qiye();
    w->show();
}
