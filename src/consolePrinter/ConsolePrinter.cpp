#include <negli/consolePrinter/ConsolePrinter.hpp>
#include <iostream>

#define EMPTY_FIELD  ' '
#define APPLE_FIELD  'O'
#define GLIDER_UP    '^'
#define GLIDER_LEFT  '<'
#define GLIDER_DOWN  'v'
#define GLIDER_RIGHT '>'

using namespace negli;

ConsolePrinter::ConsolePrinter() : AreaPrinter() {}

ConsolePrinter::~ConsolePrinter() {}

void ConsolePrinter::resetMap(Position &mapSize)
{
	this->mapSize = mapSize;
	for(int x = 0 ; x < this->mapSize.x ; ++x)
		for(int y = 0 ; y < this->mapSize.y ; ++y)
			this->map[x][y] = EMPTY_FIELD;
}

void ConsolePrinter::prepareGliders(std::vector<Glider*> &gliders)
{
	for(auto glider : gliders)
	{
		map[glider->pos.x][glider->pos.y] = ConsolePrinter::getGliderChar(glider);
	}
}

char ConsolePrinter::getGliderChar(Glider& glider)
{
	switch(&(glider.getDirection()))
	{
	case &Direction::up():    return GLIDER_UP;
	case &Direction::left():  return GLIDER_LEFT;
	case &Direction::down():  return GLIDER_DOWN;
	case &Direction::right(): return GLIDER_RIGHT;
	default throw 2; //TODO
	}
}

void ConsolePrinter::print()
{
	for(auto line : this->map)
	{
		for(auto unit : line)
			std::cout << unit;
		std::cout << std::endl;
	}
}
