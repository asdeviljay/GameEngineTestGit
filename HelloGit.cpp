// HelloGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "SpaceStation.hpp"
#include "Robot.hpp"
#include <iostream>
#include <string>
#include <memory>
#include <crtdbg.h>

#define _CRTDBG_MAP_ALLOC

using namespace std;

/*class Robot {
private :
	string m_robotName;

public :

	Robot()
		: m_robotName("No Name Robot")
	{
	}

};*/

/*class SpaceStation {
private :
	shared_ptr<Robot> m_robot = make_shared<Robot>();

public :

	void
};*/

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	/*SpaceStation *spaceStation = new SpaceStation();
	spaceStation->statusReport();
	delete(spaceStation);*/

	shared_ptr< SpaceStation> spaceStation = make_shared<SpaceStation>();
	spaceStation->statusReport();

	/*shared_ptr<Robot> robot = make_shared<Robot>();
	robot->askInfoFromSpaceStation();*/

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
