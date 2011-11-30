#include "menupane.h"
#include "ui_menupane.h"

MenuPane::MenuPane(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::MenuPane)
{
    ui->setupUi(this);
}

MenuPane::~MenuPane()
{
    delete ui;
}
