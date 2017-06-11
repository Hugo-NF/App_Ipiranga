#ifndef APP_IPIRANGA_DB_HANDLER_HPP
#define APP_IPIRANGA_DB_HANDLER_HPP

#include <sqlite3.h>

class DB_Handler{
public:
    virtual ~DB_Handler(){};
    virtual int callback(void *, int, char **, char **)=0;
    virtual int tableCreation(sqlite3 *, char *)= 0;
    virtual int tableDeletion(sqlite3 *, char *)= 0;
    virtual int insertOperation(sqlite3 *, char *)= 0;
    virtual int selectionOperation(sqlite3 *, char *)= 0;
    virtual int updateOperation(sqlite3 *, char *)= 0;
    virtual int deleteOperation(sqlite3 *, char *)= 0;
};

#endif //APP_IPIRANGA_DB_HANDLER_HPP
