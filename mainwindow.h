#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "FoodClasses/ingredient.h"
#include "Storage/arraylist.h"
#include "additem.h"
#include "edititem.h"
#include "mealdisplay.h"
#include "selectmenu.h"
#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    int count=1;
    int desiredCookTime;
    //pointers to other qwidget windows
    selectmenu *selectw= new selectmenu();
    edititem *editw = new edititem();
    additem *addw = new additem();
    //entire new window
    mealdisplay *mealdisplay = new class mealdisplay();


    ArrayList<ingredient> heldIngredients;
    ArrayList<ingredient> defaultIngredients;

   void ingredientinit();


};
#endif // MAINWINDOW_H
