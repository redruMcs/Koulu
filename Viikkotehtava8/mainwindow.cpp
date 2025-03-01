#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setActiveControls();
}

MainWindow::~MainWindow()
{
    if (timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_p1end_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_p2end_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_shortGame_clicked()
{
    gameTime = 120;

    if (tila >= 2) {
        tila = 2;
    } else {
        tila++;
    }

    if (tila == 2) {
        qDebug() << "120 sec timer set";
        ui->progressBar1->setRange(0,gameTime);
        ui->progressBar2->setRange(0,gameTime);
        ui->progressBar1->setValue(gameTime);
        ui->progressBar2->setValue(gameTime);
    }

    qDebug() << "Siirrytty tilaan" << tila;
    setActiveControls();
}


void MainWindow::on_longGame_clicked()
{
    gameTime = 300;

    if (tila >= 2) {
        tila = 2;
    } else {
        tila++;
    }

    if (tila == 2) {
        qDebug() << "5 min timer set";
        ui->progressBar1->setRange(0,gameTime);
        ui->progressBar2->setRange(0,gameTime);
        ui->progressBar1->setValue(gameTime);
        ui->progressBar2->setValue(gameTime);
    }

    qDebug() << "Siirrytty tilaan" << tila;
    setActiveControls();
}


void MainWindow::on_Start_clicked()
{
    tila = 3;
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    timer = new QTimer(this);

    connect(timer,
            &QTimer::timeout,
            this,
            &MainWindow::updateProgressBar);
    timer->setInterval(1000);
    timer->start();

    qDebug() << "Siirrytty tilaan" << tila;
    setActiveControls();
}


void MainWindow::on_Stop_clicked()
{
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);
    timer->stop();
    tila = 1;
    qDebug() << "Siirrytty tilaan" << tila;
    setActiveControls();
}

void MainWindow::updateProgressBar()
{
    tila = 3;
    if (currentPlayer == 1) {
        if (p1Time > 0) {
            p1Time--;
            ui->progressBar1->setValue(p1Time);
        } if (p1Time == 0) {
            qDebug() << "Player 1 loses";
            timer->stop();
            tila++;
            qDebug() << "Siirrytty tilaan" << tila;
            setActiveControls();
            ui->Label->setText("Player 2 WON!!");
        }
    } else {
        if (p2Time > 0) {
            p2Time--;
            ui->progressBar2->setValue(p2Time);
        } if (p2Time == 0) {
            qDebug() << "Player 2 loses";
            timer->stop();
            tila++;
            qDebug() << "Siirrytty tilaan" << tila;
            setActiveControls();
            ui->Label->setText("Player 1 WON!!");
        }
    }
}

void MainWindow::setActiveControls()
{
    if (tila == 1) {
        ui->p1end->setEnabled(false);
        ui->p2end->setEnabled(false);
        ui->shortGame->setEnabled(true);
        ui->longGame->setEnabled(true);
        ui->Start->setEnabled(false);
        ui->Stop->setEnabled(false);
        ui->Label->setText("Select playtime");
    } else if (tila == 2) {
        ui->p1end->setEnabled(false);
        ui->p2end->setEnabled(false);
        ui->shortGame->setEnabled(false);
        ui->longGame->setEnabled(false);
        ui->Start->setEnabled(true);
        ui->Stop->setEnabled(false);
        ui->Label->setText("Ready to play!");
    } else if (tila == 3) {
        ui->p1end->setEnabled(true);
        ui->p2end->setEnabled(true);
        ui->shortGame->setEnabled(false);
        ui->longGame->setEnabled(false);
        ui->Start->setEnabled(false);
        ui->Stop->setEnabled(true);
        ui->Label->setText("Game ongoing");
    } else if (tila == 4) {
        ui->p1end->setEnabled(false);
        ui->p2end->setEnabled(false);
        ui->shortGame->setEnabled(false);
        ui->longGame->setEnabled(false);
        ui->Start->setEnabled(false);
        ui->Stop->setEnabled(true);
    }
}
