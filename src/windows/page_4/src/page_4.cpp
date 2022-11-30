#include "../inc/page_4.hpp"

#include "../../../../gui/ui_window-4.h"

Page_4::Page_4(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_4
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_5
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_4::~Page_4()
{
    delete ui;
}

void Page_4::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}