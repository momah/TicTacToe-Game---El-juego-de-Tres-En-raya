/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Tue Jul 4 15:40:00 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *upLeftButton;
    QPushButton *upMidButton;
    QPushButton *upRightButton;
    QPushButton *midRightButton;
    QPushButton *midLeftButton;
    QPushButton *midButton;
    QPushButton *bottomRightButton;
    QPushButton *bottomLeftButton;
    QPushButton *bottomMidButton;
    QLabel *player1Label;
    QLabel *player2Label;
    QLineEdit *player1ScoreLineEdit;
    QLineEdit *player2ScoreLineEdit;
    QPushButton *resetButton;
    QPushButton *closeButton;
    QLabel *turnLabel;
    QPushButton *pushButton;
    QLabel *turnLabel_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(320, 240);
        Dialog->setMaximumSize(QSize(320, 240));
        Dialog->setSizeGripEnabled(false);
        Dialog->setModal(false);
        upLeftButton = new QPushButton(Dialog);
        upLeftButton->setObjectName(QString::fromUtf8("upLeftButton"));
        upLeftButton->setGeometry(QRect(10, 50, 51, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        upLeftButton->setFont(font);
        upMidButton = new QPushButton(Dialog);
        upMidButton->setObjectName(QString::fromUtf8("upMidButton"));
        upMidButton->setGeometry(QRect(60, 50, 51, 51));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        upMidButton->setFont(font1);
        upRightButton = new QPushButton(Dialog);
        upRightButton->setObjectName(QString::fromUtf8("upRightButton"));
        upRightButton->setGeometry(QRect(110, 50, 51, 51));
        upRightButton->setFont(font1);
        midRightButton = new QPushButton(Dialog);
        midRightButton->setObjectName(QString::fromUtf8("midRightButton"));
        midRightButton->setGeometry(QRect(110, 100, 51, 51));
        midRightButton->setFont(font);
        midLeftButton = new QPushButton(Dialog);
        midLeftButton->setObjectName(QString::fromUtf8("midLeftButton"));
        midLeftButton->setGeometry(QRect(10, 100, 51, 51));
        midLeftButton->setFont(font);
        midButton = new QPushButton(Dialog);
        midButton->setObjectName(QString::fromUtf8("midButton"));
        midButton->setGeometry(QRect(60, 100, 51, 51));
        midButton->setFont(font);
        bottomRightButton = new QPushButton(Dialog);
        bottomRightButton->setObjectName(QString::fromUtf8("bottomRightButton"));
        bottomRightButton->setGeometry(QRect(110, 150, 51, 51));
        bottomRightButton->setFont(font);
        bottomLeftButton = new QPushButton(Dialog);
        bottomLeftButton->setObjectName(QString::fromUtf8("bottomLeftButton"));
        bottomLeftButton->setGeometry(QRect(10, 150, 51, 51));
        bottomLeftButton->setFont(font);
        bottomMidButton = new QPushButton(Dialog);
        bottomMidButton->setObjectName(QString::fromUtf8("bottomMidButton"));
        bottomMidButton->setGeometry(QRect(60, 150, 51, 51));
        bottomMidButton->setFont(font);
        player1Label = new QLabel(Dialog);
        player1Label->setObjectName(QString::fromUtf8("player1Label"));
        player1Label->setGeometry(QRect(180, 100, 71, 21));
        player2Label = new QLabel(Dialog);
        player2Label->setObjectName(QString::fromUtf8("player2Label"));
        player2Label->setGeometry(QRect(180, 130, 71, 21));
        player1ScoreLineEdit = new QLineEdit(Dialog);
        player1ScoreLineEdit->setObjectName(QString::fromUtf8("player1ScoreLineEdit"));
        player1ScoreLineEdit->setGeometry(QRect(280, 100, 31, 20));
        player2ScoreLineEdit = new QLineEdit(Dialog);
        player2ScoreLineEdit->setObjectName(QString::fromUtf8("player2ScoreLineEdit"));
        player2ScoreLineEdit->setGeometry(QRect(280, 130, 31, 20));
        resetButton = new QPushButton(Dialog);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(10, 210, 151, 23));
        closeButton = new QPushButton(Dialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(220, 210, 91, 23));
        turnLabel = new QLabel(Dialog);
        turnLabel->setObjectName(QString::fromUtf8("turnLabel"));
        turnLabel->setGeometry(QRect(180, 60, 121, 31));
        turnLabel->setLineWidth(5);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 170, 131, 23));
        turnLabel_2 = new QLabel(Dialog);
        turnLabel_2->setObjectName(QString::fromUtf8("turnLabel_2"));
        turnLabel_2->setGeometry(QRect(10, 10, 281, 51));
        turnLabel_2->setLineWidth(5);

        retranslateUi(Dialog);
        QObject::connect(closeButton, SIGNAL(clicked()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        upLeftButton->setText(QString());
        upMidButton->setText(QString());
        upRightButton->setText(QString());
        midRightButton->setText(QString());
        midLeftButton->setText(QString());
        midButton->setText(QString());
        bottomRightButton->setText(QString());
        bottomLeftButton->setText(QString());
        bottomMidButton->setText(QString());
        player1Label->setText(QApplication::translate("Dialog", "Player 1:", 0, QApplication::UnicodeUTF8));
        player2Label->setText(QApplication::translate("Dialog", "Player 2:", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("Dialog", "Reset Cells", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("Dialog", "Close", 0, QApplication::UnicodeUTF8));
        turnLabel->setText(QApplication::translate("Dialog", "<html><head/><body><p>Player 1 Turn</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "Reset Score", 0, QApplication::UnicodeUTF8));
        turnLabel_2->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:26pt;\">TicTacToe Game</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
