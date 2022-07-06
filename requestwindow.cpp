#include "requestwindow.h"
#include "ui_requestwindow.h"

RequestWindow::RequestWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RequestWindow)
{
    ui->setupUi(this);
}

RequestWindow::~RequestWindow()
{
    delete ui;
}
