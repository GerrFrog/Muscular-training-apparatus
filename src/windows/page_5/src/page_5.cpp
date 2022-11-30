#include "../inc/page_5.hpp"

#include "../../../../gui/ui_window-5.h"

Page_5::Page_5(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_5
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_6
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_5::~Page_5()
{
    delete ui;
}

void Page_5::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}