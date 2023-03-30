#ifndef SELECTMENU_H
#define SELECTMENU_H


#include "Storage/listaccess.h"

#include <QWidget>

namespace Ui {
class selectmenu;
}

class selectmenu : public QWidget,public listaccess
{
    Q_OBJECT

public:
    explicit selectmenu(QWidget *parent = nullptr);
    ~selectmenu();
    void loadIngredients();

    void updateCheckbox();
private slots:
    void on_pushButton_2_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_checkBox_10_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

private:

    void  visibilityChanged1(bool visiblity);
    Ui::selectmenu *ui;
    int  currposition=1;
    int count=0;
    bool updatecomplete=false;
    bool canNext=true;

   int insertLocation=1;
};

#endif // SELECTMENU_H
