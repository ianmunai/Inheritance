#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <string_view>
#include <iostream>
#include "person.h"

class Player : public Person
{
    //stream output operator
    friend ostream& operator <<(ostream& out , const Player& player);
    public:
    Player() =default;
    Player (string_view game);
    

    private:
    string Game {"None"};
};








#endif