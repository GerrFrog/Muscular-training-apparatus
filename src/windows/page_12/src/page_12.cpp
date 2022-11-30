#include "../inc/page_12.hpp"

#include "../../../../gui/ui_window-12.h"

Page_12::Page_12(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_12
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_13
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_12::~Page_12()
{
    delete ui;
}

void Page_12::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}