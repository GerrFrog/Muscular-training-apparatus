#include "../inc/page_8.hpp"

#include "../../../../gui/ui_window-8.h"

Page_8::Page_8(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_8
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_9
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_8::~Page_8()
{
    delete ui;
}

void Page_8::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}