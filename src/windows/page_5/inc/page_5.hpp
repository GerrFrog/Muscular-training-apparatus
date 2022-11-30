#pragma once

#ifndef WINDOWS_PAGE_5_HEADER
#define WINDOWS_PAGE_5_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_6/inc/page_6.hpp"

namespace Ui
{
    class Page_5;
}

class Page_5 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_5(
            QWidget *parent = nullptr
        );

        ~Page_5();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_5 *ui;

        Page_6 m_page_6;
};

#endif