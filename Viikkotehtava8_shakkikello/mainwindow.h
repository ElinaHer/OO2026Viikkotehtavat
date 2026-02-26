#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

public slots:
    void timeout();

private:
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer * pQTimer;
    Ui::MainWindow * ui;

private slots:
    void timer120ClickedHandler();
    void timer5minClickedHandler();
    void switchPlayer1ClickedHandler();
    void switchPlayer2ClickedHandler();
    void startClickedHandler();
    void stopClickedHandler();

};
#endif // MAINWINDOW_H
