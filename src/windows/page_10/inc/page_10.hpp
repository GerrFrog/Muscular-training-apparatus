#pragma once

#ifndef WINDOWS_PAGE_10_HEADER
#define WINDOWS_PAGE_10_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_11/inc/page_11.hpp"

namespace Ui
{
    class Page_10;
}

class Page_10 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_10(
            QWidget *parent = nullptr
        );

        ~Page_10();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_10 *ui;

        Page_11 m_page_11;
};

#endif