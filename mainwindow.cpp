#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string.h>
#include "game_item.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mode = false;
    x = 0;
    y = 0;
    w = 100;
    h = 100;

    scene = new Game_Scene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0, 0, 900, 700);

    myRectTimer = new QTimer(this);
    myRectTimer->start(1000/100);
    connect(myRectTimer, SIGNAL(timeout()), this,   SLOT(myTimerRect()));


    parent_item = new Game_Item(x, y, w, h);

    scene->addItem(parent_item);
}

void MainWindow::myTimerRect(){

    if(this->mode == true && (buttonArray[1] == 1 || buttonArray[7] == 1))
    {
        if(mode == true){
            parent_item->setTransformOriginPoint(this->w / 2,this->h / 2);
            static int i = 0;
            parent_item->setRotation(i);
            buttonArray[1] == 1 ? i++ : i--;;
        }
    }
    if(this->mode == true && (buttonArray[5] == 1 || buttonArray[6] == 1)){
        if(mode == true){
            parent_item->setScale(buttonArray[5] == 1 ? parent_item->scale() + 0.01 : parent_item->scale() - 0.01);

        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_pressed()
{
    this->mode = true;
    this->buttonArray[1] = 1;

}

void MainWindow::on_pushButton_2_released()
{
    this->mode = false;
    this->buttonArray[1] = 0;
}

void MainWindow::on_pushButton_8_pressed()
{
    this->mode = true;
    this->buttonArray[7] = 1;
}

void MainWindow::on_pushButton_8_released()
{
    this->mode = false;
    this->buttonArray[7] = 0;
}

void MainWindow::on_pushButton_6_pressed()
{
    this->mode = true;
    this->buttonArray[5] = 1;
}

void MainWindow::on_pushButton_6_released()
{
    this->mode = false;
    this->buttonArray[5] = 0;
}

void MainWindow::on_pushButton_7_pressed()
{
    this->mode = true;
    this->buttonArray[6] = 1;
}

void MainWindow::on_pushButton_7_released()
{
    this->mode = false;
    this->buttonArray[6] = 0;
}

void MainWindow::on_pushButton_5_clicked()
{
    if(buttonArray[2]){
        if(this->w * this->h * parent_item->scale() < 0){
        ui->label_2->setNum(Game_Item::SquirRect((this->w + 10), (this->h + 10) * parent_item->scale() * (-1))); //this->w * this->h * parent_item->scale() * (-1));
        }
        else{
            ui->label_2->setNum((this->w + 10) * (this->h + 10) * parent_item->scale());
        }
    }
    else{
        if(this->w * this->h * parent_item->scale() < 0){
            ui->label_2->setNum(Game_Item::SquirCycle(w / 2 + 5, (h / 2 + 5) * parent_item->scale()) * (-1));
        }
        else{
            ui->label_2->setNum(Game_Item::SquirCycle(w / 2 + 5, (h / 2 + 5) * parent_item->scale()));
        }
    }
}

void MainWindow::on_pushButton_3_clicked()
{
   if(buttonArray[0]) {
       delete cycle;
       buttonArray[0] = 0;
       rect = new Game_Item_Rect(x - 10, y - 10, w + 20, h + 20, parent_item);
       rect->setBrush(Qt::darkCyan);
       rect->setPen(QPen(Qt::darkCyan));
   }
   else
       if(!buttonArray[2]) {
           rect = new Game_Item_Rect(x - 10, y - 10, w + 20, h + 20, parent_item);
           rect->setBrush(Qt::darkCyan);
           rect->setPen(QPen(Qt::darkCyan));
       }
   buttonArray[2] = 1;
}

void MainWindow::on_pushButton_clicked()
{
    if(buttonArray[2]) {
        delete rect;
        buttonArray[2] = 0;
        cycle = new Game_Item_Cycle(x - 10, y - 10, w + 20, h + 20, parent_item);
        cycle->setBrush(Qt::darkCyan);
        cycle->setPen(QPen(Qt::darkCyan));
    }
    else
        if(!buttonArray[0]) {
            cycle = new Game_Item_Cycle(x - 10, y - 10, w + 20, h + 20, parent_item);
            cycle->setBrush(Qt::darkCyan);
            cycle->setPen(QPen(Qt::darkCyan));
        }
    buttonArray[0] = 1;
}

void MainWindow::on_pushButton_4_clicked()
{
    if(buttonArray[2]){
        if(2 * ((this->w + 10) * parent_item->scale() + (this->h + 10) * parent_item->scale()) < 0){
        ui->label_2->setNum(Game_Item::PerimetrRect((this->w + 10) * parent_item->scale(), (this->h + 10) * parent_item->scale() * (-1))); //this->w * this->h * parent_item->scale() * (-1));
        }
        else{
            ui->label_2->setNum(Game_Item::PerimetrRect((this->w + 10) * parent_item->scale(), (this->h + 10) * parent_item->scale()));
        }
    }
    else{
        if(this->w * this->h * parent_item->scale() < 0){
            ui->label_2->setNum(Game_Item::PerimetrCycle(w / 2 + 5, (h / 2 + 5) * parent_item->scale()) * (-1));
        }
        else{
            ui->label_2->setNum(Game_Item::PerimetrCycle(w / 2 + 5, (h / 2 + 5) * parent_item->scale()));
        }
    }
}
