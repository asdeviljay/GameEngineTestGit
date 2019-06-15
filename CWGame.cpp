#include "pch.h"
#include "CWGame.hpp"
#include "Map.hpp"
#include "Player.hpp"
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS

CWGame::CWGame() :
	map(std::make_shared<Map>()),
	player(std::make_shared<Player>())
{
}


CWGame::~CWGame()
{
}

bool CWGame::init() {
	if (!map->init()) {
		return false;
	}
	return true;
}

void CWGame::update() {
	switch (_getch()) {
	case CWGame::UP:
		player->posY--;
		break;
	case CWGame::LEFT:
		player->posX--;
		break;
	case CWGame::RIGHT:
		player->posX++;
		break;
	case CWGame::DOWN:
		player->posY++;
		break;
	default:
		break;
	}

	system("CLS");
	map->update();
	player->update();
}

void CWGame::destroy() {
	map->destroy();
}