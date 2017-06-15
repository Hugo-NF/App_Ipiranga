#ifndef APP_IPIRANGA_SEARCH_HPP
#define APP_IPIRANGA_SEARCH_HPP

#include "User.hpp"
#define QUERY_INVALID "Invalid search parameters"

class Search {
public:
    static vector<User *> userSearch(vector<string> criteria, vector<string> keywords);
};
#endif //APP_IPIRANGA_SEARCH_HPP
