#include "searchresult.h"
#include "ui_searchresult.h"

SearchResult::SearchResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchResult)
{
    ui->setupUi(this);
}

SearchResult::~SearchResult()
{
    delete ui;
}

//-----------------SET FUNCTIONS---------------------
void SearchResult::SetCurrentUser(User _CurrentUser){
    CurrentUser = _CurrentUser;
}
