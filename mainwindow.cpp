#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->helloButton, &QPushButton::clicked, this, &MainWindow::onShowHelloWorld);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::onShowHelloWorld()
{
    QMessageBox::information(this, "Hello", "Hello, World!");
}

