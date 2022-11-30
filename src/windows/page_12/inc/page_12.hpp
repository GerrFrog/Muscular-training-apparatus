#pragma once

#ifndef WINDOWS_PAGE_12_HEADER
#define WINDOWS_PAGE_12_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_13/inc/page_13.hpp"

namespace Ui
{
    class Page_12;
}

class Page_12 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_12(
            QWidget *parent = nullptr
        );

        ~Page_12();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_12 *ui;

        Page_13 m_page_13;
};

#endif