#include "game_item.h"


Game_Item::Game_Item(int x, int y, int w, int h, QGraphicsItem *parent) : QGraphicsRectItem(x, y, w, h, parent)
{
    this->setFlag(GraphicsItemFlag::ItemIsMovable, true);

}

int Game_Item::SquirRect(int w,float h){
    return w * h;
}

int Game_Item::SquirCycle(float a,float b){
    return M_PI *a * b;
}

int Game_Item::PerimetrRect(int w, int h){
    return 2 * (w + h);
}

int Game_Item::PerimetrCycle(int a, int b){
    return 2 * M_PI * sqrt((a * a + b * b) / 2);
}
