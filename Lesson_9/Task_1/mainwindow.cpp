#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MainWindow::wordcounter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wordcounter()
{
    QString symbols = ui->lineEdit->text();
    int words = 0;
    for(int i = 0; symbols[i] != 0; i++){
        if ((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z')){
            if(!((symbols[i + 1] >= 'A' && symbols[i + 1] <= 'Z') || (symbols[i + 1] >= 'a' && symbols[i + 1] <= 'z'))){
                words++;
            }
        }
    }
    ui->numberwords->setValue(words);

}
