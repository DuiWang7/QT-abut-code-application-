/********************************************************************************
** Form generated from reading UI file 'kaishi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KAISHI_H
#define UI_KAISHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kaishi
{
public:
    QLabel *biaoti;
    QLabel *xiabiao;
    QLabel *xuanze;
    QPushButton *gerenpushbutton;
    QPushButton *qiyepushbutton;
    QLabel *geren;
    QLabel *qiye;
    QLabel *beijing;
    QLabel *beijing2;

    void setupUi(QWidget *kaishi)
    {
        if (kaishi->objectName().isEmpty())
            kaishi->setObjectName(QStringLiteral("kaishi"));
        kaishi->resize(771, 595);
        biaoti = new QLabel(kaishi);
        biaoti->setObjectName(QStringLiteral("biaoti"));
        biaoti->setGeometry(QRect(290, 60, 1081, 131));
        biaoti->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\347\264\240\346\235\220/mir2.png);"));
        xiabiao = new QLabel(kaishi);
        xiabiao->setObjectName(QStringLiteral("xiabiao"));
        xiabiao->setGeometry(QRect(520, 560, 291, 31));
        xiabiao->setStyleSheet(QString::fromUtf8("font: 14pt \"\344\273\277\345\256\213\";background:transparent;"));
        xuanze = new QLabel(kaishi);
        xuanze->setObjectName(QStringLiteral("xuanze"));
        xuanze->setGeometry(QRect(290, 230, 201, 41));
        xuanze->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        gerenpushbutton = new QPushButton(kaishi);
        gerenpushbutton->setObjectName(QStringLiteral("gerenpushbutton"));
        gerenpushbutton->setGeometry(QRect(280, 310, 221, 51));
        gerenpushbutton->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        qiyepushbutton = new QPushButton(kaishi);
        qiyepushbutton->setObjectName(QStringLiteral("qiyepushbutton"));
        qiyepushbutton->setGeometry(QRect(280, 430, 221, 51));
        qiyepushbutton->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        geren = new QLabel(kaishi);
        geren->setObjectName(QStringLiteral("geren"));
        geren->setGeometry(QRect(243, 290, 291, 91));
        geren->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\346\214\211\351\222\256);"));
        qiye = new QLabel(kaishi);
        qiye->setObjectName(QStringLiteral("qiye"));
        qiye->setGeometry(QRect(245, 412, 291, 91));
        qiye->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\346\214\211\351\222\256);"));
        beijing = new QLabel(kaishi);
        beijing->setObjectName(QStringLiteral("beijing"));
        beijing->setGeometry(QRect(-180, 0, 591, 611));
        beijing2 = new QLabel(kaishi);
        beijing2->setObjectName(QStringLiteral("beijing2"));
        beijing2->setGeometry(QRect(370, 0, 591, 611));
        beijing2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\350\241\245\347\232\204\350\203\214\346\231\257);"));
        beijing2->raise();
        beijing->raise();
        geren->raise();
        qiye->raise();
        biaoti->raise();
        xiabiao->raise();
        xuanze->raise();
        gerenpushbutton->raise();
        qiyepushbutton->raise();

        retranslateUi(kaishi);

        QMetaObject::connectSlotsByName(kaishi);
    } // setupUi

    void retranslateUi(QWidget *kaishi)
    {
        kaishi->setWindowTitle(QApplication::translate("kaishi", "Form", Q_NULLPTR));
        biaoti->setText(QString());
        xiabiao->setText(QApplication::translate("kaishi", "\346\211\200\345\261\236\346\235\203\357\274\232mir\345\215\263\345\233\242\351\230\237\346\211\200\346\234\211", Q_NULLPTR));
        xuanze->setText(QApplication::translate("kaishi", "\350\257\267\351\200\211\346\213\251\345\212\237\350\203\275\345\214\272\357\274\232", Q_NULLPTR));
        gerenpushbutton->setText(QApplication::translate("kaishi", "\344\270\252\344\272\272\347\211\210", Q_NULLPTR));
        qiyepushbutton->setText(QApplication::translate("kaishi", "\344\274\201\344\270\232\347\211\210", Q_NULLPTR));
        geren->setText(QString());
        qiye->setText(QString());
        beijing->setText(QApplication::translate("kaishi", "TextLabel", Q_NULLPTR));
        beijing2->setText(QApplication::translate("kaishi", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class kaishi: public Ui_kaishi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KAISHI_H
