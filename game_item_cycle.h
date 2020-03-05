#ifndef GAME_ITEM_CYCLE_H
#define GAME_ITEM_CYCLE_H

#include <QGraphicsEllipseItem>
#include "game_item.h"

class Game_Item_Cycle : public QGraphicsEllipseItem
{
public:
    Game_Item_Cycle(int x, int y, int w, int h, QGraphicsItem *parent = 0);
    QGraphicsEllipseItem *cycle;
};

#endif // GAME_ITEM_CYCLE_H
