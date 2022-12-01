/********************************************************************************
** Form generated from reading UI file 'window-3.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_2D_3_H
#define UI_WINDOW_2D_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_3
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *main_label;
    QLabel *description_label;
    QLabel *measure_label;
    QLabel *vlaue_label;
    QPushButton *next_pushButton;
    QWidget *page_2;

    void setupUi(QWidget *Page_3)
    {
        if (Page_3->objectName().isEmpty())
            Page_3->setObjectName(QString::fromUtf8("Page_3"));
        Page_3->resize(800, 480);
        Page_3->setMinimumSize(QSize(800, 480));
        Page_3->setMaximumSize(QSize(800, 480));
        Page_3->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(Page_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        centralwidget = new QWidget(Page_3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        main_label = new QLabel(page);
        main_label->setObjectName(QString::fromUtf8("main_label"));
        main_label->setGeometry(QRect(220, 0, 341, 61));
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
        description_label = new QLabel(page);
        description_label->setObjectName(QString::fromUtf8("description_label"));
        description_label->setGeometry(QRect(0, 340, 381, 21));
        description_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 18px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        description_label->setAlignment(Qt::AlignCenter);
        description_label->setWordWrap(true);
        measure_label = new QLabel(page);
        measure_label->setObjectName(QString::fromUtf8("measure_label"));
        measure_label->setGeometry(QRect(430, 340, 71, 21));
        measure_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 18px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        measure_label->setAlignment(Qt::AlignCenter);
        measure_label->setWordWrap(true);
        vlaue_label = new QLabel(page);
        vlaue_label->setObjectName(QString::fromUtf8("vlaue_label"));
        vlaue_label->setGeometry(QRect(390, 340, 41, 21));
        vlaue_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 392px;\n"
"height: 46px;\n"
"left: 52px;\n"
"top: 403px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 18px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        vlaue_label->setAlignment(Qt::AlignCenter);
        vlaue_label->setWordWrap(true);
        next_pushButton = new QPushButton(page);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));
        next_pushButton->setGeometry(QRect(520, 350, 227, 61));
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


        retranslateUi(Page_3);

        QMetaObject::connectSlotsByName(Page_3);
    } // setupUi

    void retranslateUi(QWidget *Page_3)
    {
        Page_3->setWindowTitle(QCoreApplication::translate("Page_3", "MainWindow", nullptr));
        main_label->setText(QCoreApplication::translate("Page_3", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\274\320\270\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        description_label->setText(QCoreApplication::translate("Page_3", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\207\320\260\321\201\321\202\320\276\321\202\320\260 \320\264\321\200\320\276\320\266\320\260\320\275\320\270\321\217 \321\200\321\203\320\272\320\270:", nullptr));
        measure_label->setText(QCoreApplication::translate("Page_3", "\320\223\321\206/\321\201\320\265\320\272", nullptr));
        vlaue_label->setText(QCoreApplication::translate("Page_3", "100", nullptr));
        next_pushButton->setText(QCoreApplication::translate("Page_3", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_3: public Ui_Page_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_2D_3_H
