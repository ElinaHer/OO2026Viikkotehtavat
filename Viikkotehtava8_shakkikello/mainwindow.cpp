#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QDebug>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player1Time = 0;
    player2Time = 0;
    gameTime = 0;

    pQTimer = new QTimer(this);

    connect(pQTimer, &QTimer::timeout,this
            , &MainWindow::timeout);

    connect(ui->StartGame,&QPushButton::clicked,
            this,&::MainWindow::startClickedHandler);
    connect(ui->StopGame,&QPushButton::clicked,
            this,&::MainWindow::stopClickedHandler);

    connect(ui->Swich1,&QPushButton::clicked,
            this,&MainWindow::switchPlayer1ClickedHandler);

    connect(ui->Swich2,&QPushButton::clicked,
            this,&MainWindow::switchPlayer2ClickedHandler);

    connect(ui->Time120,&QPushButton::clicked,
            this,&MainWindow::timer120ClickedHandler);

    connect(ui->Time5,&QPushButton::clicked,
            this,&MainWindow::timer5minClickedHandler);

    connect (pQTimer, SIGNAL (timeout()), this, SLOT(timeout()));
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::timeout()
{
    if(currentPlayer == 1){
        player1Time = player1Time-1;

        ui->progressBar->setValue(player1Time);

        if(player1Time == 0){
            ui->label->setText("Player 2 WON!!");
        }
    }
    else{
        player2Time = player2Time-1;

        ui->progressBar_2->setValue(player2Time);

        if(player2Time == 0){
            ui->label->setText("Player 1 WON!!");
        }
    }
}

void MainWindow::switchPlayer1ClickedHandler()
{
    qDebug() << "Pelaaja 2 vuoro";

    currentPlayer = 2;
}

void MainWindow::switchPlayer2ClickedHandler()
{
    qDebug() << "Pelaaja 1 vuoro";

    currentPlayer = 1;
}


void MainWindow::timer120ClickedHandler()
{
    qDebug() << "Timer 120";

    gameTime = 120;

    player1Time = gameTime;
    player2Time = gameTime;

    ui->progressBar->setMaximum(gameTime);
    ui->progressBar->setValue(player1Time);

    ui->progressBar_2->setMaximum(gameTime);
    ui->progressBar_2->setValue(player2Time);

    currentPlayer = 1;

    ui->label->setText("ready to play");
}

void MainWindow::timer5minClickedHandler()
{
    qDebug() << "Timer 5min";

    gameTime = 300;

    player1Time = gameTime;
    player2Time = gameTime;

    ui->progressBar->setMaximum(gameTime);
    ui->progressBar->setValue(player1Time);

    ui->progressBar_2->setMaximum(gameTime);
    ui->progressBar_2->setValue(player2Time);

    currentPlayer = 1;

    ui->label->setText("ready to play");
}


void MainWindow::startClickedHandler()
{
    qDebug() << "Start";

    pQTimer->start(1000);

    ui->label->setText("Game ongoing");
}

void MainWindow::stopClickedHandler()
{
    qDebug() << "Stop";

    pQTimer->stop();

    ui->label->setText("New game via start button");
}
