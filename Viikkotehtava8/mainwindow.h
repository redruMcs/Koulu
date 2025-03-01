#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_p1end_clicked();
    void on_p2end_clicked();
    void on_shortGame_clicked();
    void on_longGame_clicked();
    void on_Start_clicked();
    void on_Stop_clicked();
    void updateProgressBar();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    int tila = 1;
    QTimer *timer = nullptr;
    void setActiveControls();
};
#endif // MAINWINDOW_H
