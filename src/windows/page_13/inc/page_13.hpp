#pragma once

#ifndef WINDOWS_PAGE_13_HEADER
#define WINDOWS_PAGE_13_HEADER

#include <QtWidgets>
#include <QWidget>

namespace Ui
{
    class Page_13;
}

class Page_13 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_13(
            QWidget *parent = nullptr
        );

        ~Page_13();

    private:
        Ui::Page_13 *ui;
};

#endif