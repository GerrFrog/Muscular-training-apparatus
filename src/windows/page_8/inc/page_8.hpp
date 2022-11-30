#pragma once

#ifndef WINDOWS_PAGE_8_HEADER
#define WINDOWS_PAGE_8_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_9/inc/page_9.hpp"

namespace Ui
{
    class Page_8;
}

class Page_8 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_8(
            QWidget *parent = nullptr
        );

        ~Page_8();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_8 *ui;

        Page_9 m_page_9;
};

#endif