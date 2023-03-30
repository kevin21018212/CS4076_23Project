#ifndef MEALDISPLAY_H
#define MEALDISPLAY_H

#include "Storage/listaccess.h"
#include "Storage/mealloader.h"
#include "ui_mealdisplay.h"
#include <QMainWindow>

namespace Ui {
class mealdisplay;
}

class mealdisplay : public QMainWindow,public listaccess
{
    Q_OBJECT

public:
    explicit mealdisplay(QWidget *parent = nullptr);
    ~mealdisplay();
    void loadmeals(mealloader mealLoader);
     void updatemeal(int i);
private slots:
    void on_pushButton_3_clicked();
    void on_BreakFastRadio_clicked(bool checked);
    void on_DinnerRadio_clicked(bool checked);
    void on_HighProtienRadio_clicked(bool checked);
    void on_LowCarbRadio_clicked(bool checked);
    void on_LunchRadio_clicked(bool checked);
    void on_actionNone_triggered();
    void on_actionVegan_triggered();
    void on_actionPescatarian_triggered();
    void on_actionDairyFree_triggered();
    void on_actionGlutan_triggered();
    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::mealdisplay *ui;

   string findrestriction;
   int  cooktime=0;
   int  displayMode=0;
   int desiredTime=0;
};

#endif // MEALDISPLAY_H
