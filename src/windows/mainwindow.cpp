#include "mainwindow.hpp"
#include "../../gui/ui_window-1.h"

MainWindow::MainWindow(
    QWidget *parent
) : QMainWindow(parent), 
    ui(
        new Ui::MainWindow
    )
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}