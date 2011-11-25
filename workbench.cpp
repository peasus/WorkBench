#include "workbench.h"
#include "ui_workbench.h"
#include "inputwindow.h"

WorkBench::WorkBench(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WorkBench)
{
    ui->setupUi(this);
    SetupDockWidgets();
}

WorkBench::~WorkBench()
{
    delete ui;
}

void WorkBench::SetupDockWidgets()
{
    SetupInputWindow();
}

void    WorkBench::SetupInputWindow()
{
    p_inputWindow = new Ui::CInputWindow();
    addDockWidget( Qt::AllDockWidgetAreas, p_inputWindow, Qt::Horizontal );
}
