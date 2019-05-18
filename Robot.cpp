#include "pch.h"
#include "Robot.hpp"
#include <iostream>

using namespace std;

Robot::Robot(int t_number, SpaceStation* t_station)
	: m_numberOfRobot(t_number)
	, m_station(t_station)
{
}


Robot::~Robot()
{
}

void Robot::talk() const {
	cout << "HA HA HA\tI AM ROBOT NUMBER " << m_numberOfRobot << endl;
}

void Robot::askInfoFromSpaceStation() const {
	m_station->statusReport();
}