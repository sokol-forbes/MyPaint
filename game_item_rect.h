#ifndef GAME_ITEM_RECT_H
#define GAME_ITEM_RECT_H

#include "game_item.h"
//#include <QGraphicsRectItem>

class Game_Item_Rect : public Game_Item
{
public:
    Game_Item_Rect(int x, int y, int w, int h, QGraphicsItem *parent = 0);
    QGraphicsRectItem *rect;
};

#endif // GAME_ITEM_RECT_H
