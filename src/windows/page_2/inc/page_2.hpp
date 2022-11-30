#pragma once

#ifndef WINDOWS_PAGE_2_HEADER
#define WINDOWS_PAGE_2_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_3/inc/page_3.hpp"

namespace Ui
{
    class Page_2;
}

class Page_2 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_2(
            QWidget *parent = nullptr
        );

        ~Page_2();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_2 *ui;

        Page_3 m_page_3;
};

#endif