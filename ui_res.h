/********************************************************************************
** Form generated from reading UI file 'res.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RES_H
#define UI_RES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_res
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *res)
    {
        if (res->objectName().isEmpty())
            res->setObjectName(QStringLiteral("res"));
        res->resize(849, 545);
        label = new QLabel(res);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 211, 41));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        label_2 = new QLabel(res);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 200, 151, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        textEdit = new QTextEdit(res);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(200, 40, 591, 121));
        textEdit->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;"));
        textEdit_2 = new QTextEdit(res);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(true);
        textEdit_2->setGeometry(QRect(200, 210, 591, 301));
        textEdit_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\344\273\277\345\256\213\";background:transparent;\n"
""));
        label_3 = new QLabel(res);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-30, -40, 1031, 601));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\350\241\245\347\232\204\350\203\214\346\231\257);"));
        label_4 = new QLabel(res);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 10, 381, 451));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\347\264\240\346\235\220/3a457c8bf415369d9802226c08a975e8.png);"));
        label_5 = new QLabel(res);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(670, 530, 201, 16));
        label_6 = new QLabel(res);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 280, 281, 231));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/\347\264\240\346\235\220/60b273595b16c4c226c3aa593d6cc1d3.png);"));
        label_3->raise();
        label->raise();
        label_2->raise();
        label_4->raise();
        textEdit->raise();
        label_5->raise();
        label_6->raise();
        textEdit_2->raise();

        retranslateUi(res);

        QMetaObject::connectSlotsByName(res);
    } // setupUi

    void retranslateUi(QWidget *res)
    {
        res->setWindowTitle(QApplication::translate("res", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("res", "\344\272\247\345\223\201\345\237\272\346\234\254\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("res", "\344\272\247\345\223\201\345\212\250\346\200\201\357\274\232", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("res", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\344\273\277\345\256\213'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">rrf </p></body></html>", Q_NULLPTR));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("res", "\346\211\200\345\261\236\346\235\203\357\274\232\345\275\222Mir\345\222\214\345\233\242\351\230\237\346\211\200\346\234\211", Q_NULLPTR));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class res: public Ui_res {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RES_H
