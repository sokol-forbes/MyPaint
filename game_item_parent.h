#ifndef GAME_ITEM_PARENT_H
#define GAME_ITEM_PARENT_H


class Game_Item_parent
{
public:
    Game_Item_parent();
    void RotatePlus();
    void RotateMinus();
    void RotateStop();

    bool plus, minus;
};

#endif // GAME_ITEM_PARENT_H
