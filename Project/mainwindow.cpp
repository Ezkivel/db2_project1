#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonBuscarLlavesCandidatas_clicked()
{
    //Lista con los valores de R. Si R(A,B,C) entonces R.at(1) = B
    QStringList R = ui->lineEditR->text().split(",");

    //Lista con las dependencias funcionales
    QStringList F = ui->textEditF1->toPlainText().split(",");
}

void MainWindow::on_pushButtonNormalizar_clicked()
{
    //Lista con las dependencias funcionales
    QStringList F = ui->textEditF2->toPlainText().split(",");

    QString llavePrimaria = ui->lineEditLlavePrimaria->text();
}
