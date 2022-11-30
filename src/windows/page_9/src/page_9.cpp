#include "../inc/page_9.hpp"

#include "../../../../gui/ui_window-9.h"

Page_9::Page_9(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_9
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_10
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_9::~Page_9()
{
    delete ui;
}

void Page_9::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}