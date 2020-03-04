#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mode = false;

    scene = new Game_Scene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0, 0, 900, 700);

    myRectTimer = new QTimer(this);
    myRectTimer->start(1000/100);
    connect(myRectTimer, SIGNAL(timeout()), this,   SLOT(myTimerRect()));


    rect = new Game_Item(0, 0 , 100, 100);
    scene->addItem(rect);
}

void MainWindow::myTimerRect(bool &mode){

    rect->update();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    this->mode = true;
    if(mode == true){
        static int i = 0;
        rect->setRotation(i);
        i++;
    }
}

void MainWindow::on_pushButton_2_released()
{
    this->mode = false;
    if(mode == true){
        static int i = 0;
        rect->setRotation(i);
        i++;
    }
}
