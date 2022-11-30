#pragma once

#ifndef WINDOWS_PAGE_11_HEADER
#define WINDOWS_PAGE_11_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_12/inc/page_12.hpp"

namespace Ui
{
    class Page_11;
}

class Page_11 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_11(
            QWidget *parent = nullptr
        );

        ~Page_11();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_11 *ui;

        Page_12 m_page_12;
};

#endif