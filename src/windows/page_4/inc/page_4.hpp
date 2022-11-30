#pragma once

#ifndef WINDOWS_PAGE_4_HEADER
#define WINDOWS_PAGE_4_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_5/inc/page_5.hpp"

namespace Ui
{
    class Page_4;
}

class Page_4 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_4(
            QWidget *parent = nullptr
        );

        ~Page_4();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_4 *ui;

        Page_5 m_page_5;
};

#endif