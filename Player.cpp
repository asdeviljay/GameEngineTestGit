#include "pch.h"
#include "Player.hpp"
#include "utility.hpp"
#include <iostream>


Player::Player() :
	posX(2),
	posY(2)
{
}


Player::~Player()
{
}


void Player::update() {
	gotoxy(posX, posY);
	//std::cout << "P";
}