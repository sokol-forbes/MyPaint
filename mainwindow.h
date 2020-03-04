#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game_scene.h"
#include "game_item.h"
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool mode;

private:
    Ui::MainWindow *ui;
public:
    QTimer *myRectTimer;
    Game_Scene *scene;
    QGraphicsRectItem *rect;
private slots:
    void myTimerRect(bool &mode);
    void on_pushButton_2_clicked();
    void on_pushButton_2_released();
};
#endif // MAINWINDOW_H
