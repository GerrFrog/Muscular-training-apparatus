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

    ui->stackedWidget->insertWidget(
        1,
        &m_page_2
    );

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