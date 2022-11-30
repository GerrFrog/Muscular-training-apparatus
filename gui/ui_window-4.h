/********************************************************************************
** Form generated from reading UI file 'window-4.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_2D_4_H
#define UI_WINDOW_2D_4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_4
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *sub_label;
    QLabel *main_label;
    QLabel *img_label;
    QPushButton *previous_pushButton;
    QPushButton *next_pushButton;
    QWidget *page_2;

    void setupUi(QWidget *Page_4)
    {
        if (Page_4->objectName().isEmpty())
            Page_4->setObjectName(QString::fromUtf8("Page_4"));
        Page_4->resize(800, 480);
        verticalLayout_2 = new QVBoxLayout(Page_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        centralwidget = new QWidget(Page_4);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        sub_label = new QLabel(page);
        sub_label->setObjectName(QString::fromUtf8("sub_label"));
        sub_label->setGeometry(QRect(-250, 60, 681, 121));
        sub_label->setStyleSheet(QString::fromUtf8("width: 609px;\n"
"height: 227px;\n"
"left: 105px;\n"
"top: 97px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 21px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        sub_label->setAlignment(Qt::AlignCenter);
        sub_label->setWordWrap(true);
        main_label = new QLabel(page);
        main_label->setObjectName(QString::fromUtf8("main_label"));
        main_label->setGeometry(QRect(120, 10, 221, 31));
        main_label->setStyleSheet(QString::fromUtf8("width: 609px;\n"
"height: 227px;\n"
"left: 105px;\n"
"top: 97px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 28px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        main_label->setAlignment(Qt::AlignCenter);
        main_label->setWordWrap(true);
        img_label = new QLabel(page);
        img_label->setObjectName(QString::fromUtf8("img_label"));
        img_label->setGeometry(QRect(20, 140, 281, 171));
        img_label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/img_2.png")));
        img_label->setAlignment(Qt::AlignCenter);
        previous_pushButton = new QPushButton(page);
        previous_pushButton->setObjectName(QString::fromUtf8("previous_pushButton"));
        previous_pushButton->setGeometry(QRect(40, 310, 227, 61));
        previous_pushButton->setStyleSheet(QString::fromUtf8("width: 227px;\n"
"height: 61px;\n"
"left: 287px;\n"
"top: 257px;\n"
"\n"
"background: #33BBE7;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25), 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 24px;\n"
"\n"
"font-family: 'Hind';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 24px;\n"
"line-height: 38px;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;"));
        next_pushButton = new QPushButton(page);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(250, 300, 227, 61));
        next_pushButton->setStyleSheet(QString::fromUtf8("width: 227px;\n"
"height: 61px;\n"
"left: 287px;\n"
"top: 257px;\n"
"\n"
"background: #33BBE7;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25), 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 24px;\n"
"\n"
"font-family: 'Hind';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 24px;\n"
"line-height: 38px;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addWidget(centralwidget);


        retranslateUi(Page_4);

        QMetaObject::connectSlotsByName(Page_4);
    } // setupUi

    void retranslateUi(QWidget *Page_4)
    {
        Page_4->setWindowTitle(QCoreApplication::translate("Page_4", "MainWindow", nullptr));
        sub_label->setText(QCoreApplication::translate("Page_4", "\320\227\320\260\320\272\320\273\321\216\321\207\320\270\321\202\320\265 \321\200\321\203\320\272\321\203 \320\262 \320\272\321\203\320\273\320\260\320\272 \320\270 \321\201\320\273\320\265\320\263\320\272\320\260 \321\201\320\276\320\266\320\274\320\270\321\202\320\265. \320\224\320\265\321\200\320\266\320\270\321\202\320\265 \320\272\321\203\320\273\320\260\320\272 \321\201\320\266\320\260\321\202\321\213\320\274 \320\262 \321\202\320\265\321\207\320\265\320\275\320\270\320\265 1 \320\274\320\270\320\275\321\203\321\202\321\213, \320\277\321\200\320\265\320\266\320\264\320\265 \321\207\320\265\320\274 \321\200\320\260\320\267\320\262\320\276\320\264\320\270\321\202\321\214 \320\277\320\260\320\273\321\214\321\206\321\213, \320\272\320\260\320\272 \320\274\320\276\320\266\320\275\320\276 \321\210\320\270\321\200\320\265. \320\224\320\265\320\273\320\260\320\271\321\202\320\265 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\265 \320\264\320\276 5 \321\200\320\260\320\267.", nullptr));
        main_label->setText(QCoreApplication::translate("Page_4", "\320\243\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\265 1", nullptr));
        img_label->setText(QString());
        previous_pushButton->setText(QCoreApplication::translate("Page_4", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        next_pushButton->setText(QCoreApplication::translate("Page_4", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_4: public Ui_Page_4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_2D_4_H
