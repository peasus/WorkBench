#include "workbench.h"
#include "ui_workbench.h"
#include "inputwindow.h"

WorkBench::WorkBench(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WorkBench)
{
    ui->setupUi(this);
}

WorkBench::~WorkBench()
{
    delete ui;
}

void    WorkBench::SetupInputWindow()
{
}
