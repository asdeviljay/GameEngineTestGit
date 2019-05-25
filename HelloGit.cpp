// HelloGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC  

#include "pch.h"
#include <iostream>
#include <vector>

class Item {
public:
	int m_id;
	explicit Item(int t_id) : m_id(t_id)
	{
	}
	~Item()
	{

	}
};

class Monster {
public:
	std::vector<Item*> m_items;

public:
	Monster()
	{
	}
	Monster(const Monster& t_monster)
	{
		std::vector<Item*> temp;
		for (int i = 0; i < t_monster.m_items.size(); i++) {
			int id = t_monster.m_items[i]->m_id;
			temp.push_back(new Item(id));
		}
		m_items = temp;
	}
	~Monster()
	{
		for (auto it = m_items.begin(); it != m_items.end(); ++it) {
			delete(*it);
		}
	}

	Monster& operator= (const Monster& t_monster) {
		std::vector<Item*> temp;
		for (int i = 0; i < t_monster.m_items.size(); i++) {
			int id = t_monster.m_items[i]->m_id;
			temp.push_back(new Item(id));
		}
		m_items = temp;
		return *this;
	}

	void printAllItems() const {
		for (auto it = m_items.begin(); it != m_items.end(); ++it) {
			std::cout << (*it)->m_id << " ";
		}
		std::cout << std::endl;
	}
};

void printItems(const Monster& t_monster) {
	for (int i = 0; i < t_monster.m_items.size(); i++) {
		std::cout << t_monster.m_items[i]->m_id << " ";
	}
	std::cout << std::endl;
}

void printItem(Item i) {
	std::cout << i.m_id << std::endl;
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//printItem(60);

	Monster m1;
	for (int i = 0; i < 5; i++) {
		m1.m_items.push_back(new Item(i));
	}

	Monster m2;
	m2 = m1;
	std::cout << "Monster 1 : ";
	m1.printAllItems();

	m1.m_items[0]->m_id = 90;

	std::cout << "New Monster 1 : ";
	printItems(m1);

	std::cout << "Monster 2 : ";
	printItems(m2);
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
