#ifndef ADDITEM_H
#define ADDITEM_H



#include "Storage/listaccess.h"

#include <QWidget>
using namespace std;
namespace Ui {
class additem;
}

class additem : public QWidget, public listaccess
{
    Q_OBJECT

public:
    explicit additem(QWidget *parent = nullptr);
    ~additem();


private slots:
    void on_pushButton_clicked();


private:
    Ui::additem *ui;


};

#endif // ADDITEM_H
