#ifndef DIALOGEX_H
#define DIALOGEX_H

#include <QDialog>

namespace Ui {
class Dialogex;
}

class Dialogex : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogex(QWidget *parent = 0);
    ~Dialogex();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogex *ui;
};

#endif // DIALOGEX_H
