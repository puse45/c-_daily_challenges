//
// Created by pinje on 8/20/19.
//

#include "Player.h"

void Player::move(int xa, int ya) {
    x +=xa*speed;
    y +=ya*speed;

    std::cout << "Value for x: "<<x<<" Value for y: " << y <<std::endl;
}
