#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->player1ScoreLineEdit->setEnabled(false);
    ui->player2ScoreLineEdit->setEnabled(false);
    ui->player1ScoreLineEdit->setText("0");
    ui->player2ScoreLineEdit->setText("0");
    XorO[0] = "X";
    XorO[1] = "O";
    box[0][0] = ui->upLeftButton;
    box[0][1] = ui->upMidButton;
    box[0][2] = ui->upRightButton;
    box[1][0] = ui->midLeftButton;
    box[1][1] = ui->midButton;
    box[1][2] = ui->midRightButton;
    box[2][0] = ui->bottomLeftButton;
    box[2][1] = ui->bottomMidButton;
    box[2][2] = ui->bottomRightButton;
    turn = 0;
    p2Score = 0;
    p1Score = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            plays[i][j] = 0;
        }
    }


}


Dialog::~Dialog()
{
    delete ui;
}
void Dialog::changeTurns(int turn){
    if(turn)
        ui->turnLabel->setText("Player 2 Turn");
    else
        ui->turnLabel->setText("Player 1 Turn");
}

void Dialog::play(int x, int y) {

    if(plays[x][y] == 0){
        box[x][y]->setText(XorO[turn]);
        turn = (turn + 1) % 2;
        plays[x][y]++;
        if(Winner(XorO[0])){
            p1Score++;
            ui->player1ScoreLineEdit->setText(QString::number(p1Score));
            QMessageBox::information(this, "Winner", "player 1 Won!");
            on_resetButton_clicked();

        }
        else if(Winner(XorO[1])){
            p2Score++;
            ui->player2ScoreLineEdit->setText(QString::number(p2Score));
            QMessageBox::information(this, "Winner", "player 2 Won!");
            on_resetButton_clicked();

        }
        changeTurns(turn);
    }
}

void Dialog::on_upLeftButton_clicked() {
    play(0, 0);
}



void Dialog::on_upMidButton_clicked() {
    play(0, 1);
}

void Dialog::on_upRightButton_clicked() {
    play(0, 2);
}

void Dialog::on_midLeftButton_clicked() {
    play(1, 0);
}

void Dialog::on_midButton_clicked() {
    play(1, 1);

}

void Dialog::on_midRightButton_clicked() {
    play(1, 2);
}

void Dialog::on_bottomLeftButton_clicked() {
    play(2, 0);

}

void Dialog::on_bottomMidButton_clicked() {
    play(2, 1);
}

void Dialog::on_bottomRightButton_clicked() {
    play(2, 2);
}

void Dialog::on_pushButton_clicked()
{
    p1Score = 0;
    p2Score = 0;
    ui->player1ScoreLineEdit->setText("0");
    ui->player2ScoreLineEdit->setText("0");
}

bool Dialog::Winner(QString p) {
    int sumH, sumV, sumD1, sumD2;
    int i, j;

    for(i = 0; i < 3; i++){
        sumH = sumV = sumD1 = sumD2 = 0;
        for(j = 0; j < 3; j++){
            if(box[i][j]->text() == p)
                sumH += plays[i][j];
            if(box[j][i]->text() == p)
                sumV += plays[j][i];
            if(box[j][j]->text() == p)
                sumD1 += plays[j][j];
            if(box[j][2-j]->text() == p)
                sumD2 += plays[j][2-j];
        }
        if(sumH == 3 || sumV == 3 || sumD1 == 3 || sumD2 == 3)
            return true;
    }

    return false;
}
void Dialog::on_resetButton_clicked()
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            box[i][j]->setText("");
        }
    }
    turn = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            plays[i][j] = 0;
        }
    }
}
