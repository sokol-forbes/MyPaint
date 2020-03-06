#include "set_coordinate.h"
#include "ui_set_coordinate.h"

Set_Coordinate::Set_Coordinate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Set_Coordinate)
{
    ui->setupUi(this);
}

Set_Coordinate::~Set_Coordinate()
{
    delete ui;
}
