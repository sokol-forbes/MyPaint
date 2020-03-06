#ifndef SET_COORDINATE_H
#define SET_COORDINATE_H

#include <QDialog>

namespace Ui {
class Set_Coordinate;
}

class Set_Coordinate : public QDialog
{
    Q_OBJECT

public:
    explicit Set_Coordinate(QWidget *parent = nullptr);
    ~Set_Coordinate();

private:
    Ui::Set_Coordinate *ui;
};

#endif // SET_COORDINATE_H
