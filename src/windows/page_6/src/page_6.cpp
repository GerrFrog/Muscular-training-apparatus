#include "../inc/page_6.hpp"

#include "../../../../gui/ui_window-6.h"

Page_6::Page_6(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_6
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_7
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_6::~Page_6()
{
    delete ui;
}

void Page_6::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}