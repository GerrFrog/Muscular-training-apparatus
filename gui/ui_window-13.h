/********************************************************************************
** Form generated from reading UI file 'window-13.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_2D_13_H
#define UI_WINDOW_2D_13_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_13
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *main_label;
    QPushButton *again_pushButton;
    QPushButton *finish_pushButton;
    QWidget *page_2;

    void setupUi(QWidget *Page_13)
    {
        if (Page_13->objectName().isEmpty())
            Page_13->setObjectName(QString::fromUtf8("Page_13"));
        Page_13->resize(800, 480);
        Page_13->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout_2 = new QVBoxLayout(Page_13);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        centralwidget = new QWidget(Page_13);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        main_label = new QLabel(page);
        main_label->setObjectName(QString::fromUtf8("main_label"));
        main_label->setGeometry(QRect(180, 20, 411, 131));
        main_label->setStyleSheet(QString::fromUtf8("width: 545px;\n"
"height: 168px;\n"
"left: 128px;\n"
"top: 71px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 26px;\n"
"line-height: 36px;\n"
"text-align: center;\n"
"\n"
"color: #000000;\n"
"\n"
"mix-blend-mode: darken;"));
        main_label->setAlignment(Qt::AlignCenter);
        main_label->setWordWrap(true);
        again_pushButton = new QPushButton(page);
        again_pushButton->setObjectName(QString::fromUtf8("again_pushButton"));
        again_pushButton->setGeometry(QRect(270, 210, 227, 61));
        again_pushButton->setStyleSheet(QString::fromUtf8("width: 227px;\n"
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
        finish_pushButton = new QPushButton(page);
        finish_pushButton->setObjectName(QString::fromUtf8("finish_pushButton"));
        finish_pushButton->setGeometry(QRect(270, 300, 227, 61));
        finish_pushButton->setStyleSheet(QString::fromUtf8("width: 227px;\n"
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


        retranslateUi(Page_13);

        QMetaObject::connectSlotsByName(Page_13);
    } // setupUi

    void retranslateUi(QWidget *Page_13)
    {
        Page_13->setWindowTitle(QCoreApplication::translate("Page_13", "MainWindow", nullptr));
        main_label->setText(QCoreApplication::translate("Page_13", "\320\237\320\276\320\267\320\264\321\200\320\260\320\262\320\273\321\217\320\265\320\274 \321\201 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265\320\274! \n"
"\n"
"\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\200\320\265\320\260\320\261\320\270\320\273\320\270\321\202\320\260\321\206\320\270\320\270 \320\264\321\200\320\276\320\266\320\260\320\275\320\270\321\217 \320\277\320\260\320\273\321\214\321\206\320\265\320\262 \321\200\321\203\320\272", nullptr));
        again_pushButton->setText(QCoreApplication::translate("Page_13", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\267\320\260\320\275\320\276\320\262\320\276", nullptr));
        finish_pushButton->setText(QCoreApplication::translate("Page_13", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_13: public Ui_Page_13 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_2D_13_H
