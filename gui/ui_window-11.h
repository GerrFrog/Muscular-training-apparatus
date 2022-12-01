/********************************************************************************
** Form generated from reading UI file 'window-11.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_2D_11_H
#define UI_WINDOW_2D_11_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_11
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *main_label;
    QLabel *sub_label;
    QLabel *img_label;
    QPushButton *previous_pushButton;
    QPushButton *next_pushButton;
    QWidget *page_2;

    void setupUi(QWidget *Page_11)
    {
        if (Page_11->objectName().isEmpty())
            Page_11->setObjectName(QString::fromUtf8("Page_11"));
        Page_11->resize(800, 420);
        Page_11->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout_2 = new QVBoxLayout(Page_11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        centralwidget = new QWidget(Page_11);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        main_label = new QLabel(page);
        main_label->setObjectName(QString::fromUtf8("main_label"));
        main_label->setGeometry(QRect(90, 0, 601, 71));
        main_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 657px;\n"
"height: 187px;\n"
"left: 72px;\n"
"top: 40px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 28px;\n"
"line-height: 36px;\n"
"text-align: center;\n"
"\n"
"color: #000000;\n"
"\n"
"mix-blend-mode: darken;"));
        main_label->setAlignment(Qt::AlignCenter);
        main_label->setWordWrap(true);
        sub_label = new QLabel(page);
        sub_label->setObjectName(QString::fromUtf8("sub_label"));
        sub_label->setGeometry(QRect(110, 80, 541, 51));
        sub_label->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 657px;\n"
"height: 187px;\n"
"left: 72px;\n"
"top: 40px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 18px;\n"
"line-height: 36px;\n"
"text-align: center;\n"
"\n"
"color: #000000;\n"
"\n"
"mix-blend-mode: darken;"));
        sub_label->setAlignment(Qt::AlignCenter);
        sub_label->setWordWrap(true);
        img_label = new QLabel(page);
        img_label->setObjectName(QString::fromUtf8("img_label"));
        img_label->setGeometry(QRect(240, 150, 291, 141));
        img_label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/img_1.png")));
        img_label->setAlignment(Qt::AlignCenter);
        previous_pushButton = new QPushButton(page);
        previous_pushButton->setObjectName(QString::fromUtf8("previous_pushButton"));
        previous_pushButton->setGeometry(QRect(0, 300, 227, 61));
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
        next_pushButton->setGeometry(QRect(520, 310, 227, 61));
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


        retranslateUi(Page_11);

        QMetaObject::connectSlotsByName(Page_11);
    } // setupUi

    void retranslateUi(QWidget *Page_11)
    {
        Page_11->setWindowTitle(QCoreApplication::translate("Page_11", "MainWindow", nullptr));
        main_label->setText(QCoreApplication::translate("Page_11", "\320\232\320\276\320\275\320\265\321\207\320\275\320\276\320\265 \320\270\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\265 \321\207\320\260\321\201\321\202\320\276\321\202\321\213 \320\264\321\200\320\276\320\266\320\260\320\275\320\270\321\217 \321\200\321\203\320\272\320\270.", nullptr));
        sub_label->setText(QCoreApplication::translate("Page_11", "\320\222\321\213\321\202\321\217\320\275\320\270\321\202\320\265 \321\200\321\203\320\272\321\203 \320\262\320\277\320\265\321\200\320\265\320\264 \320\273\320\260\320\264\320\276\320\275\321\214\321\216 \320\262\320\275\320\270\320\267, \320\275\320\260\320\266\320\274\320\270\321\202\320\265 \342\200\234\320\224\320\260\320\273\320\265\320\265\342\200\235,\n"
"\321\203\320\264\320\265\321\200\320\266\320\270\320\262\320\260\320\271\321\202\320\265 \321\200\321\203\320\272\321\203 \320\262 \321\202\320\265\321\207\320\265\320\275\320\270\320\265 5 \320\274\320\270\320\275\321\203\321\202.", nullptr));
        img_label->setText(QString());
        previous_pushButton->setText(QCoreApplication::translate("Page_11", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        next_pushButton->setText(QCoreApplication::translate("Page_11", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_11: public Ui_Page_11 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_2D_11_H
