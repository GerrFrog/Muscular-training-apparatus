#pragma once

#ifndef WINDOWS_PAGE_9_HEADER
#define WINDOWS_PAGE_9_HEADER

#include <QtWidgets>
#include <QWidget>

#include "../../page_10/inc/page_10.hpp"

namespace Ui
{
    class Page_9;
}

class Page_9 :
    public QWidget
{
    Q_OBJECT

    public:
        explicit Page_9(
            QWidget *parent = nullptr
        );

        ~Page_9();

    private slots:
        void handle_next_pushButton();

    private:
        Ui::Page_9 *ui;

        Page_10 m_page_10;
};

#endif