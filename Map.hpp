#pragma once
class Map
{
public:
	Map();
	Map(unsigned int t_width, unsigned int t_height);
	~Map();
	Map(const Map&) = default;
	Map& operator= (const Map&) = default;

	bool init();
	void update();
	void destroy();

private:
	unsigned int m_width;
	unsigned int m_height;
};

