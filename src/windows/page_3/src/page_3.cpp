#include "../inc/page_3.hpp"

#include "../../../../gui/ui_window-3.h"

Page_3::Page_3(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_3
    )
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(
        1,
        &m_page_4
    );

    connect(
        ui->next_pushButton,
        SIGNAL( clicked() ),
        this,
        SLOT( handle_next_pushButton() )
    );
}

Page_3::~Page_3()
{
    delete ui;
}

void Page_3::handle_next_pushButton()
{
    ui->stackedWidget->setCurrentIndex(1);
}





