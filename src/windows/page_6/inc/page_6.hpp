#pragma once

#ifndef WINDOWS_PAGE_6_HEADER
#define WINDOWS_PAGE_6_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_7/inc/page_7.hpp"

namespace Ui
{
    class Page_6;
}

class Page_6 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_6(
            QWidget *parent = nullptr
        );

        ~Page_6();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_6 *ui;

        Page_7 m_page_7;
};

#endif