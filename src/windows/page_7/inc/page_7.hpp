#pragma once

#ifndef WINDOWS_PAGE_7_HEADER
#define WINDOWS_PAGE_7_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_8/inc/page_8.hpp"

namespace Ui
{
    class Page_7;
}

class Page_7 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_7(
            QWidget *parent = nullptr
        );

        ~Page_7();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_7 *ui;

        Page_8 m_page_8;
};

#endif