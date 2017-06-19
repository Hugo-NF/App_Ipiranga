#ifndef SEARCHADS_H
#define SEARCHADS_H

#include <QWidget>
#include "../include/User.hpp"

namespace Ui {
class SearchAds;
}

class SearchAds : public QWidget
{
    Q_OBJECT

public:
    explicit SearchAds(QWidget *parent = 0,User* _CurrentUser=0);
    ~SearchAds();

private:
    Ui::SearchAds *ui;
    User *CurrentUser; //User active
};

#endif // SEARCHADS_H
