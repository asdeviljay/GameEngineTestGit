#include "pch.h"
#include "Map.hpp"
#include <iostream>

Map::Map() :
	m_width(5),
	m_height(5)
{
}

Map::Map(unsigned int t_width, unsigned int t_height) :
	m_width(t_width),
	m_height(t_height)
{
}

Map::~Map()
{
}

bool Map::init() {

	return true;
}

void Map::update() {
	std::cout << "|--------------------|" << std::endl;
	std::cout << "|-..................-|" << std::endl;
	std::cout << "|-..................-|" << std::endl;
	std::cout << "|-..................-|" << std::endl;
	std::cout << "|--------------------|" << std::endl;
}

void Map::destroy() {

}
