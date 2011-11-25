#ifndef WORKBENCH_H
#define WORKBENCH_H

#include <QMainWindow>



namespace Ui {
    class WorkBench;
    class CInputWindow;
}

class WorkBench : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkBench(QWidget *parent = 0);
    ~WorkBench();

private:
    void    SetupDockWidgets();
    void    SetupInputWindow();

private:
    Ui::WorkBench *ui;
    Ui::CInputWindow    *p_inputWindow;
};

#endif // WORKBENCH_H
