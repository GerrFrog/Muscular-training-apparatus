#pragma once

#ifndef WINDOWS_MAINWINDOW_HEADER
#define WINDOWS_MAINWINDOW_HEADER

#include <QMainWindow>
#include <QDebug>

#include "../kernel/common.hpp"

#include "page_2/inc/page_2.hpp"

QT_BEGIN_NAMESPACE
namespace Ui 
{ 
    class MainWindow; 
}
QT_END_NAMESPACE

class MainWindow : 
    public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(
            QWidget *parent = nullptr
        );

        ~MainWindow();

    private:
        Ui::MainWindow *ui;

        Page_2 m_page_2;

    private slots:
        void handle_start_pushButton();
};
#endif 