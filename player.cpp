#include "person.h"
#include "player.h"
using namespace std;

Player::Player (string_view game)
    :Game(game)
{
    First_name ="John";
    Last_name="Snow";
}

ostream& operator<<(ostream& out, const Player& player){
    out<<"Player : [game : "<<player.Game <<"names : "<<player.getFirstName()
    <<" "<<player.getLastName() << "]";
    return out;
}
