#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game_scene.h"
#include "game_item.h"
#include <QTimer>
#include <QTime>
#include "game_item_rect.h"
#include "game_item_cycle.h"

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
    int buttonArray[8] = {0, 0, 0, 0, 0, 0, 0};
    int x;
    int y;
    int w;
    int h;


private:
    Ui::MainWindow *ui;
public:
    QTimer *myRectTimer;
    Game_Scene *scene;
    Game_Item *parent_item;
    Game_Item_Rect *rect;
    Game_Item_Cycle *cycle;
private slots:
    void myTimerRect();
    void on_pushButton_2_pressed();
    void on_pushButton_2_released();
    void on_pushButton_8_pressed();
    void on_pushButton_8_released();
    void on_pushButton_6_pressed();
    void on_pushButton_6_released();
    void on_pushButton_7_pressed();
    void on_pushButton_7_released();
    void on_pushButton_5_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
};
#endif // MAINWINDOW_H
