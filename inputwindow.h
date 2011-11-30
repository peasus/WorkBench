#ifndef INPUTWINDOW_H
#define INPUTWINDOW_H

#include <QWidget>
#include <QDockWidget>

namespace Ui {
    class inputwindow;
}

class InputWindow : public QDockWidget
{
    Q_OBJECT

public:
    explicit InputWindow(QWidget *parent = 0, Qt::WindowFlags flags = 0);
    ~InputWindow();

private:
    Ui::inputwindow *ui;
};

#endif // INPUTWINDOW_H
