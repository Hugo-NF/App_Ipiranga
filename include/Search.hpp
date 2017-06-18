#ifndef APP_IPIRANGA_SEARCH_HPP
#define APP_IPIRANGA_SEARCH_HPP

#include "User.hpp"
#define QUERY_INVALID "Invalid search parameters"

class Search {
private:
    unsigned int currentUserID;
    string table;
    bool toggleText;
    string textSearch;
    bool toggleFilters;
    vector<string> criterias;
    vector<string> keywords;
    bool toggleOrdernation;
    string orderBy;
    bool orderSequence; //true - ASC : false - DESC
    bool toggleBandFilter;
    string bandFilterCriteria;
    double bandFilterMin;
    double bandFilterMax;
    bool toggleFriends;
    bool toggleFriendsofFriends;
public:
    Search(){}
    Search(unsigned int userID){
        this->currentUserID = userID;
    }
    ~Search(){}
    unsigned int getCurrentUserID();
    void enableTextSearch(bool);
    bool textSearchEnabled();
    void setText(string);
    string getText();
    void enableFilters(bool);
    bool filtersEnabled();
    void setCriterias(vector<string>);
    vector<string> getCriterias();
    void setKeywords(vector<string>);
    vector<string> getKeywords();
    void enableOrdenation(bool);
    bool ordenationEnabled();
    void setOrderBy(string);
    string getOrderBy();
    void setOrderingSequence(bool);
    bool getOrderingSequence();
    void enablebandFilter(bool);
    bool bandFilterEnabled();
    void setBandFilterCriteria(string);
    string getBandFilterCriteria();
    void setMinValue(double);
    void setMaxValue(double);
    double getMinValue();
    double getMaxValue();
    void enableFriendsSearch(bool);
    bool friendsSearchEnabled();
    void enableFriendsofFriendsSearch(bool);
    bool friendsOfFriendsSearchEnabled();

    static vector<User *> userSearch(Search *parameters);
    static vector<Ads *> adsSearch(Search *parameters);

};
#endif //APP_IPIRANGA_SEARCH_HPP
