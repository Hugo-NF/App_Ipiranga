
#ifndef APP_IPIRANGA_HISTORIC_HPP
#define APP_IPIRANGA_HISTORIC_HPP

#include "User.hpp"
#include "Ads.hpp"

using namespace std;

class Historic{
private:
    unsigned int id;
    unsigned int sellerId;
    string sellerUsername;
    unsigned int buyerId;
    string buyerUsername;
    unsigned int selleRating;
    unsigned int buyeRating;
    unsigned int adId;
    string adTitle;
    unsigned int quantity;
    string category;
    double price;
    string date;

    static void createTable(sqlite3 *);
    static void deleteTable(sqlite3 *);


public:
    Historic(){}
    Historic(unsigned int id){
        this->id = id;
    }
    ~Historic(){}
    unsigned int getId();
    void setSellerId(unsigned int);
    unsigned int getSellerId();
    void setSellerUsername(string);
    string getSellerUsername();
    void setBuyerId(unsigned int);
    unsigned int getBuyerId();
    void setBuyerUsername(string);
    string getBuyerUsername();
    void setSellerRating(unsigned int);
    unsigned int getSellerRating();
    void setBuyerRating(unsigned int);
    unsigned int getBuyerRating();
    void setAdId(unsigned int);
    unsigned int getAdId();
    void setAdTitle(string);
    string getAdTitle();
    void setQuantity(unsigned int);
    unsigned int getQuantity();
    void setPrice(double);
    double getPrice();
    void setDate(string);
    string getDate();
    unsigned int getUserRating(unsigned int);
    string getCategory();
    void setCategory();

    static void cleanTable();
    void insertOperation(sqlite3 *, Historic *);

    static void evaluate(Historic *, unsigned int);
    static vector<Historic *> retrieveHistoric(unsigned int, bool, bool);

};


#endif //APP_IPIRANGA_HISTORIC_HPP
