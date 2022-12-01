/********************************************************************************
** Form generated from reading UI file 'window-8.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_2D_8_H
#define UI_WINDOW_2D_8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_8
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

    void setupUi(QWidget *Page_8)
    {
        if (Page_8->objectName().isEmpty())
            Page_8->setObjectName(QString::fromUtf8("Page_8"));
        Page_8->resize(800, 480);
        Page_8->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout_2 = new QVBoxLayout(Page_8);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        centralwidget = new QWidget(Page_8);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        main_label = new QLabel(page);
        main_label->setObjectName(QString::fromUtf8("main_label"));
        main_label->setGeometry(QRect(280, 10, 221, 31));
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
        sub_label = new QLabel(page);
        sub_label->setObjectName(QString::fromUtf8("sub_label"));
        sub_label->setGeometry(QRect(60, 60, 681, 121));
        sub_label->setStyleSheet(QString::fromUtf8("width: 609px;\n"
"height: 227px;\n"
"left: 105px;\n"
"top: 97px;\n"
"\n"
"font-family: 'Graduate';\n"
"font-style: normal;\n"
"font-weight: 400;\n"
"font-size: 17px;\n"
"line-height: 23px;\n"
"text-align: center;\n"
"\n"
"color: #000000;"));
        sub_label->setAlignment(Qt::AlignCenter);
        sub_label->setWordWrap(true);
        img_label = new QLabel(page);
        img_label->setObjectName(QString::fromUtf8("img_label"));
        img_label->setGeometry(QRect(240, 200, 281, 171));
        img_label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/img_6.png")));
        img_label->setAlignment(Qt::AlignCenter);
        previous_pushButton = new QPushButton(page);
        previous_pushButton->setObjectName(QString::fromUtf8("previous_pushButton"));
        previous_pushButton->setGeometry(QRect(20, 380, 227, 61));
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
        next_pushButton->setGeometry(QRect(530, 380, 227, 61));
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


        retranslateUi(Page_8);

        QMetaObject::connectSlotsByName(Page_8);
    } // setupUi

    void retranslateUi(QWidget *Page_8)
    {
        Page_8->setWindowTitle(QCoreApplication::translate("Page_8", "MainWindow", nullptr));
        main_label->setText(QCoreApplication::translate("Page_8", "\320\243\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\265 5", nullptr));
        sub_label->setText(QCoreApplication::translate("Page_8", "\320\237\320\276\320\264\320\275\321\217\321\202\320\270\320\265 \320\277\320\260\320\273\321\214\321\206\320\260. \n"
" \320\237\320\276\320\273\320\276\320\266\320\270\321\202\320\265 \321\200\321\203\320\272\321\203 \320\273\320\260\320\264\320\276\320\275\321\214\321\216 \320\262\320\275\320\270\320\267 \320\275\320\260 \321\200\320\276\320\262\320\275\321\203\321\216 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214. \320\237\320\276 \320\276\321\207\320\265\321\200\320\265\320\264\320\270 \320\277\320\276\320\264\320\275\320\270\320\274\320\260\320\271\321\202\320\265 \320\277\320\260\320\273\321\214\321\206\321\213 \320\270 \320\272\320\273\320\260\320\264\320\270\321\202\320\265 \320\270\321\205 \320\276\320\261\321\200\320\260\321\202\320\275\320\276 \320\275\320\260 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\321\214. \320\234\320\276\320\266\320\275\320\276 \320\277\320\276\320\264\320\275\320\270\320\274\320\260\321\202\321"
                        "\214 \320\262\321\201\320\265 \320\277\320\260\320\273\321\214\321\206\321\213 \321\201\321\200\320\260\320\267\321\203. \320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 10-12 \321\200\320\260\320\267 \320\264\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\271 \321\200\321\203\320\272\320\270.\302\240", nullptr));
        img_label->setText(QString());
        previous_pushButton->setText(QCoreApplication::translate("Page_8", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        next_pushButton->setText(QCoreApplication::translate("Page_8", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_8: public Ui_Page_8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_2D_8_H
