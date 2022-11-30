#include "../inc/page_11.hpp"

#include "../../../../gui/ui_window-11.h"

Page_11::Page_11(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_11
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_12
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_11::~Page_11()
{
    delete ui;
}

void Page_11::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}