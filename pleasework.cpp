#include "pleasework.h"
#include "ui_pleasework.h"

PleaseWork::PleaseWork(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PleaseWork)
{
    ui->setupUi(this);
}

PleaseWork::~PleaseWork()
{
    delete ui;
}
