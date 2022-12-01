/********************************************************************************
** Form generated from reading UI file 'window-12.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_2D_12_H
#define UI_WINDOW_2D_12_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_12
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *main_label;
    QLabel *description_1_label;
    QPushButton *next_pushButton;
    QLabel *value_1_label;
    QLabel *measure_1_label;
    QLabel *value_2_label;
    QLabel *measure_2_label;
    QLabel *description_2_label;
    QWidget *page_2;

    void setupUi(QWidget *Page_12)
    {
        if (Page_12->objectName().isEmpty())
            Page_12->setObjectName(QString::fromUtf8("Page_12"));
        Page_12->resize(800, 420);
        Page_12->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout = new QVBoxLayout(Page_12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        centralwidget = new QWidget(Page_12);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        main_label = new QLabel(page);
        main_label->setObjectName(QString::fromUtf8("main_label"));
        main_label->setGeometry(QRect(180, 0, 351, 51));
        main_label->setStyleSheet(QString::fromUtf8("width: 545px;\n"
"height: 39px;\n"
"left: 128px;\n"
"top: 31px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 32px;\n"
"line-height: 36px;\n"
"text-align: center;\n"
"\n"
"color: #000000;\n"
"\n"
"mix-blend-mode: darken;"));
        main_label->setAlignment(Qt::AlignCenter);
        main_label->setWordWrap(true);
        description_1_label = new QLabel(page);
        description_1_label->setObjectName(QString::fromUtf8("description_1_label"));
        description_1_label->setGeometry(QRect(10, 260, 381, 16));
        description_1_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        description_1_label->setAlignment(Qt::AlignCenter);
        description_1_label->setWordWrap(true);
        next_pushButton = new QPushButton(page);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(540, 260, 227, 61));
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
        value_1_label = new QLabel(page);
        value_1_label->setObjectName(QString::fromUtf8("value_1_label"));
        value_1_label->setGeometry(QRect(400, 290, 31, 16));
        value_1_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        value_1_label->setAlignment(Qt::AlignCenter);
        value_1_label->setWordWrap(true);
        measure_1_label = new QLabel(page);
        measure_1_label->setObjectName(QString::fromUtf8("measure_1_label"));
        measure_1_label->setGeometry(QRect(440, 260, 51, 16));
        measure_1_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        measure_1_label->setAlignment(Qt::AlignCenter);
        measure_1_label->setWordWrap(true);
        value_2_label = new QLabel(page);
        value_2_label->setObjectName(QString::fromUtf8("value_2_label"));
        value_2_label->setGeometry(QRect(400, 260, 31, 16));
        value_2_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        value_2_label->setAlignment(Qt::AlignCenter);
        value_2_label->setWordWrap(true);
        measure_2_label = new QLabel(page);
        measure_2_label->setObjectName(QString::fromUtf8("measure_2_label"));
        measure_2_label->setGeometry(QRect(440, 290, 51, 16));
        measure_2_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        measure_2_label->setAlignment(Qt::AlignCenter);
        measure_2_label->setWordWrap(true);
        description_2_label = new QLabel(page);
        description_2_label->setObjectName(QString::fromUtf8("description_2_label"));
        description_2_label->setGeometry(QRect(20, 290, 371, 16));
        description_2_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 14px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        description_2_label->setAlignment(Qt::AlignCenter);
        description_2_label->setWordWrap(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(centralwidget);


        retranslateUi(Page_12);

        QMetaObject::connectSlotsByName(Page_12);
    } // setupUi

    void retranslateUi(QWidget *Page_12)
    {
        Page_12->setWindowTitle(QCoreApplication::translate("Page_12", "MainWindow", nullptr));
        main_label->setText(QCoreApplication::translate("Page_12", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\274\320\270\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        description_1_label->setText(QCoreApplication::translate("Page_12", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\274\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\207\320\260\321\201\321\202\320\276\321\202\320\260 \320\264\321\200\320\276\320\266\320\260\320\275\320\270\321\217 \321\200\321\203\320\272\320\270:", nullptr));
        next_pushButton->setText(QCoreApplication::translate("Page_12", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        value_1_label->setText(QCoreApplication::translate("Page_12", "100", nullptr));
        measure_1_label->setText(QCoreApplication::translate("Page_12", "\320\223\321\206/\321\201\320\265\320\272", nullptr));
        value_2_label->setText(QCoreApplication::translate("Page_12", "100", nullptr));
        measure_2_label->setText(QCoreApplication::translate("Page_12", "\320\223\321\206/\321\201\320\265\320\272", nullptr));
        description_2_label->setText(QCoreApplication::translate("Page_12", "\320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217 \320\274\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\207\320\260\321\201\321\202\320\276\321\202\320\260 \320\264\321\200\320\276\320\266\320\260\320\275\320\270\321\217 \321\200\321\203\320\272\320\270:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_12: public Ui_Page_12 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_2D_12_H
