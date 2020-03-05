#ifndef GAME_ITEM_H
#define GAME_ITEM_H

#include <QGraphicsRectItem>
//#include "game_item_parent.h"

class Game_Item : public QGraphicsRectItem//, public Game_Item_parent
{
public:
    Game_Item(int x, int y, int w, int h, QGraphicsItem *parent = 0);
    static int SquirRect(int w, float h);
//    int PerimetrRect(int w, int h);
};

#endif // GAME_ITEM_H
