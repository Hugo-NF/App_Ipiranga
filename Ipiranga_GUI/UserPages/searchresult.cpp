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

void SearchResult::setSearchType(bool type){
    SearchType = type;
}

void SearchResult::setResults(/*vector <tipoai *> results*/){

    /*int size;

    size = results.size();

    for(int i=0; i<size; i++){
        //set os filds de acordo com o retorno dentro de um for;
    }*/
}
