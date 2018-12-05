/********************************************************************************
** Form generated from reading UI file 'qiye.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QIYE_H
#define UI_QIYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qiye
{
public:
    QLabel *label;
    QLabel *datelabel;
    QLabel *beijing1;
    QLabel *label_2;
    QLabel *wenjian;
    QPushButton *xuanzepushbutton;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *xuanzepushbutton_2;
    QLabel *pic;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *qiye)
    {
        if (qiye->objectName().isEmpty())
            qiye->setObjectName(QStringLiteral("qiye"));
        qiye->resize(990, 756);
        label = new QLabel(qiye);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 140, 241, 41));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        datelabel = new QLabel(qiye);
        datelabel->setObjectName(QStringLiteral("datelabel"));
        datelabel->setGeometry(QRect(0, 43, 571, 31));
        datelabel->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";background:transparent;"));
        beijing1 = new QLabel(qiye);
        beijing1->setObjectName(QStringLiteral("beijing1"));
        beijing1->setGeometry(QRect(-50, 300, 501, 461));
        beijing1->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\347\264\240\346\235\220/953a95ce2c239b063d94016b06ab29d2.png);"));
        label_2 = new QLabel(qiye);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(false);
        label_2->setGeometry(QRect(-10, -10, 1051, 851));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\350\241\245\347\232\204\350\203\214\346\231\257);"));
        wenjian = new QLabel(qiye);
        wenjian->setObjectName(QStringLiteral("wenjian"));
        wenjian->setGeometry(QRect(310, 150, 291, 28));
        wenjian->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        xuanzepushbutton = new QPushButton(qiye);
        xuanzepushbutton->setObjectName(QStringLiteral("xuanzepushbutton"));
        xuanzepushbutton->setGeometry(QRect(670, 144, 121, 28));
        xuanzepushbutton->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";background:transparent;"));
        label_3 = new QLabel(qiye);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 130, 154, 55));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\346\214\211\351\222\256);"));
        label_4 = new QLabel(qiye);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(810, 130, 154, 55));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\346\214\211\351\222\256);"));
        xuanzepushbutton_2 = new QPushButton(qiye);
        xuanzepushbutton_2->setObjectName(QStringLiteral("xuanzepushbutton_2"));
        xuanzepushbutton_2->setGeometry(QRect(829, 143, 121, 28));
        xuanzepushbutton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\344\273\277\345\256\213\";background:transparent;"));
        pic = new QLabel(qiye);
        pic->setObjectName(QStringLiteral("pic"));
        pic->setGeometry(QRect(459, 302, 408, 379));
        pic->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        label_5 = new QLabel(qiye);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 72, 15));
        label_6 = new QLabel(qiye);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(800, 740, 191, 16));
        label_2->raise();
        label_3->raise();
        label->raise();
        datelabel->raise();
        beijing1->raise();
        wenjian->raise();
        xuanzepushbutton->raise();
        label_4->raise();
        xuanzepushbutton_2->raise();
        pic->raise();
        label_5->raise();
        label_6->raise();

        retranslateUi(qiye);

        QMetaObject::connectSlotsByName(qiye);
    } // setupUi

    void retranslateUi(QWidget *qiye)
    {
        qiye->setWindowTitle(QApplication::translate("qiye", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("qiye", "\351\200\211\346\213\251\344\272\214\347\273\264\347\240\201\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        datelabel->setText(QString());
        beijing1->setText(QString());
        label_2->setText(QString());
        wenjian->setText(QString());
        xuanzepushbutton->setText(QApplication::translate("qiye", "\351\200\211\346\213\251code\350\267\257\345\276\204", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QString());
        xuanzepushbutton_2->setText(QApplication::translate("qiye", "\347\241\256\350\256\244", Q_NULLPTR));
        pic->setText(QString());
        label_5->setText(QApplication::translate("qiye", "\344\274\201\344\270\232\347\211\210", Q_NULLPTR));
        label_6->setText(QApplication::translate("qiye", "\346\211\200\345\261\236\346\235\203\357\274\232\345\275\222Mir\345\217\212\345\205\266\345\233\242\351\230\237\346\211\200\346\234\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qiye: public Ui_qiye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QIYE_H
