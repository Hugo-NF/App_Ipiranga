#ifndef SEARCHRESULT_H
#define SEARCHRESULT_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class SearchResult;
}

class SearchResult : public QWidget
{
    Q_OBJECT

public:
    explicit SearchResult(QWidget *parent = 0);
    ~SearchResult();
    void SetCurrentUser(User);  //Set the User Active
    void setResults(vector <Ads*>); //vector that contain the results of search
    void setSearchType(bool);   // 1 to Friends - 0 to Advertise

private:
    Ui::SearchResult *ui;

    User CurrentUser; //User Active
    bool SearchType; // 1 to Friends - 0 to Advertise
};

#endif // SEARCHRESULT_H
