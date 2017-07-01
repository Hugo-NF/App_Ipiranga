#include "adminpage.h"
#include "ui_adminpage.h"

AdminPage::AdminPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminPage)
{
    ui->setupUi(this);

    //-----set the default objects----------
    this->setHistoric_default();
    this->setUsers_default();
    this->setTransations_default();
}

AdminPage::~AdminPage()
{
    delete ui;
}

//----------------------------------DELETE TABLES--------------------------------------
void AdminPage::on_Button_delete_users_clicked()
{
    if(QMessageBox::question(this,tr("Delete all Users"),
                             tr("Are you sure that want to DELETE all USERS?"))
                                == QMessageBox::Yes){
        Friendship::cleanTable();   //delete the BD of friends
        User::cleanTable();         //delete the BD of users
        QMessageBox::information(this,tr("Delete all users"),tr("Sucess!"));
    }
}

void AdminPage::on_Button_delete_transations_clicked()
{
    if(QMessageBox::question(this,tr("Delete all transations"),
                             tr("Are you sure that want to DELETE all TRANSATIONS?"))
                                == QMessageBox::Yes){
        Ads::cleanTable();      //delete the BD of advertisements
        QMessageBox::information(this,tr("Delete all transations"),tr("Sucess!"));
    }
}

void AdminPage::on_Button_delete_historic_clicked()
{
    if(QMessageBox::question(this,tr("Delete all hitorics"),
                             tr("Are you sure that want to DELETE all HISTORICS?"))
                                == QMessageBox::Yes){
        Historic::cleanTable(); //delete the BD of historics
        QMessageBox::information(this,tr("Delete all historics"),tr("Sucess!"));
    }
}

//-----------------------------------DELETE OBJECTS--------------------------------------

//--USERS---------------------------------------
void AdminPage::deleteUsersObject()
{
    //delete all objects on the screen
    for(int i=0; i<users_size; i++){
        user_object[i]->~FriendsLayout();
    }
    users_size=0;
}

//--TRANSATIONS---------------------------------
void AdminPage::deleteTransationsObject()
{
    //delete all objects on the screen
    for(int i=0; i<transations_size; i++){
        transations_object[i]->~AdsLayout();
    }
    transations_size=0;
}

//---------------------------------SET METHODS------------------------------------
void AdminPage::setHomePage()
{
    //To implement later
}

//--USERS---------------------------------------
void AdminPage::setUsers_default()
{
    vector <User*> users;   //users informations
    Search parameters(0);   //parameters of search

    //set the parameters of search
    parameters.enableTextSearch(true);
    parameters.setText("");

    //get the users informations
    users = Search::userSearch(&parameters);

    //set the object with users informations
    this->setUsers(users);
}

void AdminPage::setUsers(vector <User*> users)
{
    //amount of users returned
    users_size = users.size();

    //create a vector of object to show on the screen
    user_object.resize(users_size);

    //set the objects
    for(int i=0; i<users_size; i++){
        user_object[i] = new FriendsLayout;

        user_object[i]->setAdminMode();             //set admin privilege
        user_object[i]->setMy_F_Address(users[i]);  //set address of this users

        ui->box_users->addWidget(user_object[i]);   //show on the screen
    }
}

//--TRANSATIONS---------------------------------------
void AdminPage::setTransations_default()
{
    vector <Ads*> ads;      //advertisement informations
    Search parameters(0);   //parameters of search

    //set the parameters of search
    parameters.enableTextSearch(true);
    parameters.setText("");

    //receive the advertisement informations
    ads = Search::adsSearch(&parameters);

    //set the object with advertisement informations
    this->setTransations(ads);
}

void AdminPage::setTransations(vector <Ads*> ads)
{
    //amount of ads returned
    transations_size = ads.size();

    //create a vecto of objects to show on the screen
    transations_object.resize(transations_size);

    //create and set fields of object
    for(int i=0; i<transations_size; i++){

        transations_object[i] = new AdsLayout;

        //---Set fields of object advertisement
        transations_object[i]->setAdminMode();
        transations_object[i]->setID(ads[i]->getId());
        transations_object[i]->setTitle(QString::fromStdString(ads[i]->getTitle()));
        transations_object[i]->setCategory(QString::fromStdString(ads[i]->getCategory()));
        transations_object[i]->setPrice(QString::number(ads[i]->getPrice()));
        transations_object[i]->setDate(QString::fromStdString(ads[i]->getDate()));
        transations_object[i]->setQuantity(QString::number(ads[i]->getAmount()));
        transations_object[i]->setDescription(QString::fromStdString(ads[i]->getDescription()));

        ui->box_transation->addWidget(transations_object[i]);
    }
}

//--HISTORICS---------------------------------------
void AdminPage::setHistoric_default()
{
    vector <Historic*> historic;    //historic informations

    //receive all the historics
    historic = Historic::retrieveHistoric(0,false,false);

    this->setHistoric(historic);
}

void AdminPage::setHistoric(vector <Historic*> historic)
{
    //amout of historics returned
    historics_size = historic.size();

    //create a vector of objects to show on the screen
    historic_object.resize(historics_size);

    //create, set admin mode and address of the objects
    for(int i=0; i<historics_size; i++){

        historic_object[i] = new HistoricLayout;

        historic_object[i]->setHist_Address(historic[i]);
        historic_object[i]->setAdminMode();

        ui->box_historics->addWidget(historic_object[i]);
    }
}

//--------------------------------BUTTONS SEARCH---------------------------------

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
    vector <User*> search_result;   //user information
    Search parameters(0);           //parameters of search

    if(!ui->line_search_users->text().isEmpty()){   //if is not empty

        this->deleteUsersObject();  //delete all actual objects

        //set the parameters of search
        parameters.enableTextSearch(true);
        parameters.setText(ui->line_search_users->text().toStdString());

        //receive the results of search
        search_result = Search::userSearch(&parameters);

        //set on the screen
        this->setUsers(search_result);
    }else{
        this->deleteUsersObject();  //delete all actual objects
        this->setUsers_default();   //put all users information on the screen
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
    vector <Ads*> search_result;    //advertisement informations
    Search parameters(0);           //parameters of search

    if(!ui->line_search_transation->text().isEmpty()){   //if is not empty

        //delete all the advertisement on the screen
        this->deleteTransationsObject();

        //set the parameters of search
        parameters.enableTextSearch(true);
        parameters.setText(ui->line_search_transation->text().toStdString());

        //receive the result of search
        search_result = Search::adsSearch(&parameters);

        //put on the screen the results
        this->setTransations(search_result);
    }else{
        this->deleteTransationsObject();    //delete the actual advertisement on the screen
        this->setTransations_default();     //put all the advertisement on the screen
    }
}
