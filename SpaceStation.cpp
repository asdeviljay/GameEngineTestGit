#include "pch.h"
#include "SpaceStation.hpp"
#include "Robot.hpp"
#include <iostream>

using namespace std;

SpaceStation::SpaceStation()
	: m_posX(0)
	, m_posY(0)
	, m_posZ(0)
{
	for (int i = 1; i <= 20; i++) {
		m_robots.push_back(Robot(i, this));
	}


}

SpaceStation::~SpaceStation()
{
}

void SpaceStation::statusReport() const {
	//TODO: Something
	cout << "print status" << endl;
	cout << "X: " << m_posX
		<< "\tY: " << m_posY
		<< "\tZ: " << m_posZ << endl;
	for (int i = 0; i < m_robots.size(); i++) {
		m_robots.at(i).talk();
	}
	//m_robot->askInfoFromSpaceStation();
}

float SpaceStation::getPositionX() const {
	return m_posX;
}

float SpaceStation::getPositionY() const {
	return m_posY;
}

float SpaceStation::getPositionZ() const {
	return m_posZ;
}

void SpaceStation::setPositionX(float _posX) {
	m_posX = _posX;
}

void SpaceStation::setPositionY(float _posY) {
	m_posY = _posY;
}

void SpaceStation::setPositionZ(float _posZ) {
	m_posZ= _posZ;
}