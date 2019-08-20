//
// Created by pinje on 8/20/19.
//

#include "str_player.h"
void str_Player::move(int xa, int ya) {
    x +=xa*speed;
    y +=ya*speed;

    std::cout<< "Value for Y: "<<y << " Value for X: "<<x<<std::endl;
}