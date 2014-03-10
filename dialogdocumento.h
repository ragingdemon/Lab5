#ifndef DIALOGDOCUMENTO_H
#define DIALOGDOCUMENTO_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class DialogDocumento;
}

class DialogDocumento : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDocumento(MainWindow *parent = 0);
    ~DialogDocumento();

private slots:
    void on_pbAgregar_clicked();

private:
    Ui::DialogDocumento *ui;
    MainWindow *mw;
};

#endif // DIALOGDOCUMENTO_H
