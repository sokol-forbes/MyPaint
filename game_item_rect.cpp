#include "game_item_rect.h"

Game_Item_Rect::Game_Item_Rect(int x, int y, int w, int h, QGraphicsItem *parent) : Game_Item(x, y, w, h, parent)
{
    this->setFlag(GraphicsItemFlag::ItemIsMovable, false);
}
