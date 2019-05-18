#pragma once
#include <memory>
#include "SpaceStation.hpp"

class Robot
{
private :
	int m_numberOfRobot;
	SpaceStation* m_station;

public:
	Robot(int t_number, SpaceStation* t_station);
	virtual ~Robot();

	void talk() const;
	void askInfoFromSpaceStation() const;
};

