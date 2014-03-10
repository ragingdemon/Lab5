#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <QList>
#include <QComboBox>
#include "descubrimiento.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QList<Descubrimiento*> descubrimientos;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    void clearComboBox(QComboBox* cb);
    template <class T>
    void deleteElementFromList(QComboBox* box,QList<T> &lista){
        int index=box->currentIndex();
        if(index >= 0){
            // Se debe de utilizar el mismo QList con el que se llenó el comboBox
            // y el mismo comboBox  que llenamos con el QList
            delete lista[index];
            lista.removeAt(index); // remueve el elemento del QList
            box->removeItem(index); // remueve el elemento del QList
        }
    }
    template <class T>
    void fillComboBox(QComboBox* box,QList<T> &lista){
        foreach (T t, lista) {
            box->addItem(t->getType().mid(1) +": "+t->getNombre());
        }
    }
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
};

#endif // MAINWINDOW_H
