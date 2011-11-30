#ifndef WORKBENCH_H
#define WORKBENCH_H

#include <QMainWindow>



namespace Ui {
    class WorkBench;
}

class InputWindow;

class WorkBench : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkBench(QWidget *parent = 0);
    ~WorkBench();

private:
    void    SetupInputWindow();

private:
    Ui::WorkBench*  ui;
    InputWindow*    mp_inputWindow;
};

#endif // WORKBENCH_H
