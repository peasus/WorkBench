#ifndef MENUPANE_H
#define MENUPANE_H

#include <QDockWidget>

namespace Ui {
    class MenuPane;
}

class MenuPane : public QDockWidget
{
    Q_OBJECT

public:
    explicit MenuPane(QWidget *parent = 0);
    ~MenuPane();

private:
    Ui::MenuPane *ui;
};

#endif // MENUPANE_H
