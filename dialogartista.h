#ifndef DIALOGARTISTA_H
#define DIALOGARTISTA_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class DialogArtista;
}

class DialogArtista : public QDialog
{
    Q_OBJECT

public:
    explicit DialogArtista(MainWindow *parent = 0);
    ~DialogArtista();

private slots:
    void on_pbAgregar_clicked();

private:
    Ui::DialogArtista *ui;
    MainWindow *mw;
};

#endif // DIALOGARTISTA_H
