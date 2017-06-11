#ifndef FORMREGISTER_H
#define FORMREGISTER_H

#include <QDialog>

namespace Ui {
class FormRegister;
}

class FormRegister : public QDialog
{
    Q_OBJECT

public:
    explicit FormRegister(QWidget *parent = 0);
    ~FormRegister();

private slots:
    void on_pushButton_Cancel_clicked();

private:
    Ui::FormRegister *ui;
};

#endif // FORMREGISTER_H
