#include "../inc/page_7.hpp"

#include "../../../../gui/ui_window-7.h"

Page_7::Page_7(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_7
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_8
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_7::~Page_7()
{
    delete ui;
}

void Page_7::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}