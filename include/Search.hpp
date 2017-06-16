#ifndef APP_IPIRANGA_SEARCH_HPP
#define APP_IPIRANGA_SEARCH_HPP

#include "User.hpp"
#define QUERY_INVALID "Invalid search parameters"

class Search {
private:
    bool toogleText;
    string textSearch;
    bool toogleFilters;
    vector<string> criterias;
    vector<string> keywords;
    bool toogleOrdernation;
    string orderBy;
    bool orderSequence; //true - ASC : false - DESC
    bool toogleBandFilter;
    string bandFilterValue;
    double bandFilterMin;
    double bandFilterMax;
public:
    static vector<User *> userSearch(bool, string, bool, vector<string> criteria, vector<string> keywords, bool, string, bool, double, double);
};
#endif //APP_IPIRANGA_SEARCH_HPP
