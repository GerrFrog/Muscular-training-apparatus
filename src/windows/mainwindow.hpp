#pragma once

#ifndef WINDOWS_MAINWINDOW_HEADER
#define WINDOWS_MAINWINDOW_HEADER

#include <QMainWindow>
#include <QDebug>

#include "../kernel/common.hpp"

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

    private slots:
        void handle_start_pushButton();

        void on_next_pushButton_clicked();
        void on_next_pushButton_2_clicked();
        void on_next_pushButton_3_clicked();
        void on_next_pushButton_5_clicked();
        void on_next_pushButton_6_clicked();
        void on_next_pushButton_7_clicked();
        void on_next_pushButton_9_clicked();
        void on_next_pushButton_10_clicked();
        void on_next_pushButton_11_clicked();
        void on_next_pushButton_12_clicked();
        void on_next_pushButton_13_clicked();
        void on_again_pushButton_clicked();
};
#endif 