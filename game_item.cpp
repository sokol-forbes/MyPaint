#include "game_item.h"


Game_Item::Game_Item(int x, int y, int w, int h) : QGraphicsRectItem(x, y ,w, h)
{
    this->setFlag(GraphicsItemFlag::ItemIsMovable, true);

}

int Game_Item::SquirRect(int w,float h){
    return w * h;
}

