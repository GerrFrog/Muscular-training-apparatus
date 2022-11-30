#include "../inc/page_13.hpp"

#include "../../../../gui/ui_window-13.h"

Page_13::Page_13(
    QWidget *parent
) : QWidget(parent),
    ui(
        new Ui::Page_13
    )
{
    ui->setupUi(this);
}

Page_13::~Page_13()
{
    delete ui;
}
