#include "../inc/page_10.hpp"

#include "../../../../gui/ui_window-10.h"

Page_10::Page_10(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_10
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_11
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_10::~Page_10()
{
    delete ui;
}

void Page_10::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}