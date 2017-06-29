#include "searchresult.h"
#include "ui_searchresult.h"
#include "../include/Ads.hpp"
#include "layout/searchads.h"
#include "layout/serachfriends.h"

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
void SearchResult::SetCurrentUser(User* _CurrentUser){
    CurrentUser = _CurrentUser;
}

void SearchResult::setSearchType(bool type){
    SearchType = type;
}

void SearchResult::set_A_Results(vector <Ads*> results){

    int size;

    //Number of results returned
    size = results.size();

    //Set the quantity of returns on the screen
    ui->n_results->setText(QString::number(size));

    //----Set Ads-----

   for(int i=0; i<size; i++){
       SearchAds *result_ads = new SearchAds(this,CurrentUser);
       result_ads->setMyaddress(results[i]);
       ui->box_search_result->addWidget(result_ads);
   }
}

void SearchResult::set_F_Results(vector <User*> results){

    int size;

    //Number of results returned
    size = results.size();

    //Set the quantity of returns on the screen
    ui->n_results->setText(QString::number(size));

    //----Set Ads-----

   for(int i=0; i<size; i++){
       SerachFriends* result_ads = new SerachFriends(this,CurrentUser);
       result_ads->setMyaddress(results[i]);
       ui->box_search_result->addWidget(result_ads);
   }
}
