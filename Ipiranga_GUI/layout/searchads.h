#ifndef SEARCHADS_H
#define SEARCHADS_H

#include <QWidget>

namespace Ui {
class SearchAds;
}

class SearchAds : public QWidget
{
    Q_OBJECT

public:
    explicit SearchAds(QWidget *parent = 0);
    ~SearchAds();

private:
    Ui::SearchAds *ui;
};

#endif // SEARCHADS_H
