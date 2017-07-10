#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>
#include <QPushButton>
#include <QMessageBox>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    bool Winner(QString p);
    void changeTurns(int turn);


private slots:
    void on_upLeftButton_clicked();
    void on_resetButton_clicked();
    void on_upMidButton_clicked();
    void on_upRightButton_clicked();
    void on_midLeftButton_clicked();
    void on_midButton_clicked();
    void on_midRightButton_clicked();
    void on_bottomLeftButton_clicked();
    void on_bottomMidButton_clicked();
    void on_bottomRightButton_clicked();
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    int plays[3][3];
    int turn;
    int p1Score;
    int p2Score;
    QString XorO[2];
    QPushButton* box[3][3];
    void play(int x, int y);
};

#endif // DIALOG_H
