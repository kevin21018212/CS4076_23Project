#ifndef EDITITEM_H
#define EDITITEM_H


#include "Storage/listaccess.h"


#include <QWidget>

namespace Ui {
class edititem;
}

class edititem : public QWidget,public listaccess
{
    Q_OBJECT

public:
    explicit edititem(QWidget *parent = nullptr);
    ~edititem();
    //overides input ingredient virtual function in listaccess
    void inputIngredients(ArrayList<ingredient> &input,ArrayList<ingredient> &selectedinput);
     void displayInfo();
     int getUpdateCount();
     //returns itself
     edititem getobject();

private slots:
      void on_pushButton_clicked();

      void on_pushButton_2_clicked();

private:
    Ui::edititem *ui;
    int count=1;


};

#endif // EDITITEM_H
