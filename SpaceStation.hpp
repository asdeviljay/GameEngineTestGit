#pragma once
#include <memory>
#include <vector>
//#include "Robot.hpp"

class Robot;

class SpaceStation
{
private :
	float m_posX;
	float m_posY;
	float m_posZ;

	std::vector<Robot> m_robots;

public:
	SpaceStation();
	virtual ~SpaceStation();

	void statusReport() const;

	float getPositionX() const;
	float getPositionY() const;
	float getPositionZ() const;

	void setPositionX(float _posX);
	void setPositionY(float _posY);
	void setPositionZ(float _posZ);
};

