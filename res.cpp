#include "res.h"
#include "ui_res.h"
#include<QString>
#include<QDebug>
res::res(QString res_,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::res)
{
    ui->setupUi(this);
    this->setFixedSize(849,545);
    ui->textEdit->setReadOnly(true);
    ui->textEdit_2->setReadOnly(true);
    ui->textEdit->setTextColor(QColor(0, 5, 51));
    ui->textEdit_2->setTextColor(QColor(0, 5, 51));
    ui->textEdit->setFontUnderline(true);
    ui->textEdit_2->setFontUnderline(true);
    ui->textEdit->setFontWeight(80);
    ui->textEdit_2->setFontWeight(80);
    ui->textEdit->setFontFamily("黑体");
    ui->textEdit_2->setFontFamily("黑体");
    int resnum=res_.toInt();
    jiben1="产品名：1111 \r\n"
          "编码：00001 \r\n"
          "型号：00001 \r\n"
          "安检员：00001 \r\n"
         ;
    jiben2=" 产品名：2222 \r\n"
           "编码：00002 \r\n"
           "型号：00002 \r\n"
           "安检员：00002 \r\n"
          ;
    jiben3=" 产品名：3333 \r\n"
           "编码：00003  \r\n"
           "型号：00003  \r\n"
           "安检员：00003  \r\n"
          ;
    out1="1:于A时在B地C厂间出产 工作人员：** \r\n\r\n"
         "2:于某时某地运输至分销售点E 工作人员：** \r\n\r\n"
         "3:于某事某地运输至最终销售店F 工作人员：** \r\n\r\n"
         "4:最终于某时某地销售给G某 工作人员：** \r\n\r\n"
         "5:该产品于某事某地返H厂维修 工作人员：** \r\n\r\n"
         "6:该产品于某事某地维修好，维修号0001 工作人员：** \r\n\r\n"
         "7:该产品由维修厂发往顾客，顾客未接受 工作人员：** \r\n\r\n"
         "8:顾客于某时某地接受该产品 工作人员：** \r\n\r\n"
         ;
    out2="1:于A时在B地C厂间出产 工作人员：** \r\n\r\n"
         "2:于某时某地运输至分销售点E 工作人员：** \r\n\r\n"
         "3:于某事某地运输至最终销售店F 工作人员：** \r\n\r\n"
         "4:最终于某时某地销售给G某 工作人员：** \r\n\r\n"
         ;
    out3="1:于A时在B地C厂间出产 工作人员：** \r\n\r\n"
         "2:于某时某地运输至分销售点E 工作人员：** \r\n\r\n"
         "3:于某事某地运输至最终销售店F 工作人员：** \r\n\r\n"
         ;
    qDebug()<<resnum;
    switch (resnum) {
    case 1: ui->textEdit_2->setText(out1);
            ui->textEdit->setText(jiben1);
            break;
    case 2: ui->textEdit_2->setText(out2);
            ui->textEdit->setText(jiben2);
            break;
    case 3:ui->textEdit_2->setText(out3);
           ui->textEdit->setText(jiben3);
            break;
    default:
        break;
    }

}

res::~res()
{
    delete ui;
}
