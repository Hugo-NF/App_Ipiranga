#include "adminpage.h"
#include "ui_adminpage.h"

AdminPage::AdminPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminPage)
{
    ui->setupUi(this);

    this->setHistoric_default();
    this->setUsers_default();
    this->setTransations_default();
}

AdminPage::~AdminPage()
{
    delete ui;
}

//---------------DELETE TABLES--------------------
void AdminPage::on_Button_delete_users_clicked()
{
    if(QMessageBox::question(this,tr("Delete all Users"),
                             tr("Are you sure that want to DELETE all USERS?"))
                                == QMessageBox::Yes){
        Friendship::cleanTable();
        User::cleanTable();
        QMessageBox::information(this,tr("Delete all users"),tr("Sucess!"));
    }
}

void AdminPage::on_Button_delete_transations_clicked()
{
    if(QMessageBox::question(this,tr("Delete all transations"),
                             tr("Are you sure that want to DELETE all TRANSATIONS?"))
                                == QMessageBox::Yes){
        Ads::cleanTable();
        QMessageBox::information(this,tr("Delete all transations"),tr("Sucess!"));
    }
}

void AdminPage::on_Button_delete_historic_clicked()
{
    if(QMessageBox::question(this,tr("Delete all hitorics"),
                             tr("Are you sure that want to DELETE all HISTORICS?"))
                                == QMessageBox::Yes){
        Historic::cleanTable();
        QMessageBox::information(this,tr("Delete all historics"),tr("Sucess!"));
    }
}

//---------------DELETE OBJECTS-----------------

//--USERS---------------------------------------
void AdminPage::deleteUsersObject()
{
    for(int i=0; i<users_size; i++){
        user_object[i]->~FriendsLayout();
    }
}

//---------------SET METHODS--------------------
void AdminPage::setHomePage()
{

}

//--USERS---------------------------------------
void AdminPage::setUsers_default()
{
    vector <User*> users;
    Search parameters(0);

    parameters.enableTextSearch(true);
    parameters.setText("");

    users = Search::userSearch(&parameters);

    this->setUsers(users);
}

void AdminPage::setUsers(vector <User*> users)
{
    users_size = users.size();

    user_object.resize(users_size);

    for(int i=0; i<users_size; i++){
        user_object[i] = new FriendsLayout;

        user_object[i]->setAdminMode();
        user_object[i]->setMy_F_Address(users[i]);

        ui->box_users->addWidget(user_object[i]);
    }
}

//--TRANSATIONS---------------------------------------
void AdminPage::setTransations_default()
{
    vector <Ads*> ads;
    Search parameters(0);

    parameters.enableTextSearch(true);
    parameters.setText("");

    ads = Search::adsSearch(&parameters);

    this->setTransations(ads);
}

void AdminPage::setTransations(vector <Ads*> ads)
{
    int size;

    size = ads.size();

    for(int i=0; i<size; i++){
        AdsLayout* ads_object = new AdsLayout;

        ads_object->setID(ads[i]->getId());

        ui->box_transation->addWidget(ads_object);
    }
}

//--HISTORICS---------------------------------------
void AdminPage::setHistoric_default()
{
    vector <Historic*> historic;

    historic = Historic::retrieveHistoric(0,false,false);

    this->setHistoric(historic);
}

void AdminPage::setHistoric(vector <Historic*> historic)
{
    int size;

    size = historic.size();

    for(int i=0; i<size; i++){
        HistoricLayout* historic_object = new HistoricLayout;

        historic_object->setHist_Address(historic[i]);
        historic_object->setAdminMode();

        ui->box_historics->addWidget(historic_object);
    }
}

//---------------BUTTONS SEARCH-------------------

//--USERS-----------------------------------------
void AdminPage::on_Button_search_users_clicked()
{
    this->on_line_search_users_returnPressed();
}

void AdminPage::on_line_search_users_textChanged()
{
    this->on_line_search_users_returnPressed();
}

void AdminPage::on_line_search_users_returnPressed()
{
    vector <User*> search_result;
    Search parameters(0);

    if(!ui->line_search_users->text().isEmpty()){   //if is not empty

        this->deleteUsersObject();

        parameters.enableTextSearch(true);
        parameters.setText(ui->line_search_users->text().toStdString());

        search_result = Search::userSearch(&parameters);

        this->setUsers(search_result);
    }
}

//--TRANSATION------------------------------------
void AdminPage::on_Button_search_transation_clicked()
{
    this->on_line_search_transation_returnPressed();
}

void AdminPage::on_line_search_transation_textChanged()
{
    this->on_line_search_transation_returnPressed();
}

void AdminPage::on_line_search_transation_returnPressed()
{
    vector <Ads*> search_result;
    Search parameters(0);


    if(!ui->line_search_transation->text().isEmpty()){   //if is not empty

        this->setTransations(search_result);
    }
}

//--HISTORICS------------------------------------
void AdminPage::on_Button_search_historics_clicked()
{
    this->on_line_search_historics_returnPressed();
}

void AdminPage::on_line_search_historics_textChanged()
{
    this->on_line_search_historics_returnPressed();
}

void AdminPage::on_line_search_historics_returnPressed()
{
    vector <Historic*> search_result;
    Search parameters();

    if(!ui->line_search_historics->text().isEmpty()){   //if is not empty

        this->setHistoric(search_result);
    }
}
