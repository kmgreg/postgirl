#ifndef REQUESTWINDOW_H
#define REQUESTWINDOW_H

#include <QMainWindow>

namespace Ui {
class RequestWindow;
}

class RequestWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RequestWindow(QWidget *parent = nullptr);
    ~RequestWindow();

private:
    Ui::RequestWindow *ui;
};

#endif // REQUESTWINDOW_H
