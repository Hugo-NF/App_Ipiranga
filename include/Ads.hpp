#ifndef APP_IPIRANGA_ADS_HPP
#define APP_IPIRANGA_ADS_HPP

#include "User.hpp"

using namespace std;

class Ads{
private:
    unsigned int id;
    string title;
    string date;
    string category;
    string description;
    string city;
    string state;
    string sellerUsername;
    double sellerRating;
    unsigned int sellerId;
    unsigned int amount;
    double price;

    void createTable(sqlite3 *);
    void deleteTable(sqlite3 *);

public:
    Ads(unsigned int id){
        this->id = id;
    }
    Ads(){}
    ~Ads(){}
    unsigned int getId();
    void setTitle(string);
    string getTitle();
    void setDate(string);
    string getDate();
    void setCategory(string);
    string getCategory();
    void setDescription(string);
    string getDescription();
    void setCity(string);
    string getCity();
    void setState(string);
    string getState();
    void setSellerUsername(string);
    string getSellerUsername();
    void setSellerRating(double);
    double getSellerRating();
    void setSellerId(unsigned int);
    unsigned int getSellerId();
    void setAmount(unsigned int);
    unsigned int getAmount();
    void setPrice(double);
    double getPrice();


    void cleanTable();
    void insertOperation(sqlite3 *, Ads *);
    void updateOperation(sqlite3 *, Ads *);
};


#endif //APP_IPIRANGA_ADS_HPP
