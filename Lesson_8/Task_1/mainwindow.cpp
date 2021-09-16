#include "mainwindow.h"
#include "ui_mainwindow.h"

double linenumbs, firstnum, secondnum;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(numbs_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(numbs_pressed()));

    connect(ui->pushButton_plus,SIGNAL(released()),this,SLOT(operation()));
    connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(operation()));
    connect(ui->pushButton_multi,SIGNAL(released()),this,SLOT(operation()));
    connect(ui->pushButton_divesion,SIGNAL(released()),this,SLOT(operation()));
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_multi->setCheckable(true);
    ui->pushButton_divesion->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numbs_pressed()
{
    QPushButton  * button = (QPushButton*) sender();
    QString newline;

    linenumbs = (ui->lineEdit->text() + button->text()).toDouble();
    newline = QString::number(linenumbs);

    ui->lineEdit->setText(newline);
}


void MainWindow::on_pushButton_dot_released()
{
    if(!(ui->lineEdit->text().contains('.'))){
        ui->lineEdit->setText(ui->lineEdit->text() + ".");
    }
}

void MainWindow::on_pushButton_percent_released()
{
    QString newline;
    linenumbs = ui->lineEdit->text().toDouble();
    linenumbs = linenumbs * 0.01;
    newline = QString::number(linenumbs);
    ui->lineEdit->setText(newline);
}

void MainWindow::on_pushButton_equal_released()
{
    QString newline;
    secondnum = ui->lineEdit->text().toDouble();
    if(ui->pushButton_plus->isChecked()){
        linenumbs = firstnum+secondnum;
        newline = QString::number(linenumbs);
        ui->lineEdit->setText(newline);
        ui->pushButton_plus->setChecked(false);
    }else if(ui->pushButton_minus->isChecked()){
        linenumbs = firstnum-secondnum;
        newline = QString::number(linenumbs);
        ui->lineEdit->setText(newline);
        ui->pushButton_minus->setChecked(false);
    }else if(ui->pushButton_multi->isChecked()){
        linenumbs = firstnum*secondnum;
        newline = QString::number(linenumbs);
        ui->lineEdit->setText(newline);
        ui->pushButton_multi->setChecked(false);
    }else if(ui->pushButton_divesion->isChecked()){
        linenumbs = firstnum/secondnum;
        newline = QString::number(linenumbs);
        ui->lineEdit->setText(newline);
        ui->pushButton_divesion->setChecked(false);
    }
}

void MainWindow::operation()
{
    QPushButton  * button = (QPushButton*) sender();
    firstnum = ui->lineEdit->text().toDouble();
    button->setChecked(true);
    ui->lineEdit->setText("0");
}

void MainWindow::on_pushButton_clear_released()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_multi->setChecked(false);
    ui->pushButton_divesion->setChecked(false);
    ui->lineEdit->setText("0");
}


void MainWindow::on_pushButton_backscape_released()
{
    QString newline;
    linenumbs = ui->lineEdit->text().toDouble();
    newline = QString::number(linenumbs);
    newline.chop(1);
    if(newline.isEmpty()){
        newline = "0";
    }
    ui->lineEdit->setText(newline);

}

