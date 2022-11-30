#pragma once

#ifndef WINDOWS_PAGE_3_HEADER
#define WINDOWS_PAGE_3_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_4/inc/page_4.hpp"

namespace Ui
{
    class Page_3;
}

class Page_3 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_3(
            QWidget *parent = nullptr
        );

        ~Page_3();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_3 *ui;

        Page_4 m_page_4;
};

#endif