#include "../inc/page_2.hpp"

#include "../../../../gui/ui_window-2.h"

Page_2::Page_2(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_2
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_3
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_2::~Page_2()
{
    delete ui;
}

void Page_2::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}