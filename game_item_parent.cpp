#include "game_item_parent.h"

Game_Item_parent::Game_Item_parent()
{
    this->plus = false;
    this->minus = false;
}

void Game_Item_parent::RotatePlus(){
    this->plus = true;
    this->minus = false;
}

void Game_Item_parent::RotateMinus(){
    this->plus = false;
    this->minus = true;
}

void Game_Item_parent::RotateStop(){
    this->plus = false;
    this->minus = false;
}

void RotateMinus(){

}

