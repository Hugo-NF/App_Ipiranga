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

private:
    Ui::SearchResult *ui;

    User CurrentUser; //User Active
};

#endif // SEARCHRESULT_H
