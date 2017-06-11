#include "userapp.h"
#include "ui_userapp.h"

UserApp::UserApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserApp)
{
    ui->setupUi(this);
}

UserApp::~UserApp()
{
    delete ui;
}
