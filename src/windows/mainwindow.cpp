#include "mainwindow.hpp"
#include "../../gui/ui_window-1.h"

#include <iostream>

using namespace std;

MainWindow::MainWindow(
    QWidget *parent
) : QMainWindow(parent), 
    ui(
        new Ui::MainWindow
    )
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    connect(
        ui->start_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_start_pushButton() )
    );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handle_start_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_next_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_next_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_next_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_next_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_next_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_next_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_next_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_next_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_next_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_next_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_next_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void MainWindow::on_again_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_finish_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}