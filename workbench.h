#ifndef WORKBENCH_H
#define WORKBENCH_H

#include <QMainWindow>

namespace Ui {
    class WorkBench;
}

class WorkBench : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkBench(QWidget *parent = 0);
    ~WorkBench();

private:
    Ui::WorkBench *ui;
};

#endif // WORKBENCH_H
