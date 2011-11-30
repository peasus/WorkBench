#include "inputwindow.h"
#include "ui_inputwindow.h"

InputWindow::InputWindow(QWidget *parent, Qt::WindowFlags flags)
    : QDockWidget(parent, flags),
    ui(new Ui::inputwindow)
{
    ui->setupUi(this);
}

InputWindow::~InputWindow()
{
    delete ui;
}
