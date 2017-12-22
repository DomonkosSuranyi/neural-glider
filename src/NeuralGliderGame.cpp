#include <negli/NeuralGliderGame.hpp>
#include <stdlib.h>
#include <exception>

using namespace negli;
using negli::NeuralGliderGame;

class InvalidNumberGenerated : public std::exception
{
	virtual const char* what() const throw()
	{
		return "An invalid random number has been generated";
	}
} ingex;

NeuralGliderGame::NeuralGliderGame(int x, int y, int glidernum, int applenum, AreaPrinter& printer)
	: mapSize(x,y), numberOfGliders(glidernum), numberOfApples(applenum) 
{
	this->printer = &printer;
	this->printer->resetMap(this->mapSize);
	for(int i = 0 ; i < glidernum ; ++i)
	{
		this->gliders.push_back(new Glider(rand() % x, rand() % y, getRandomDirection()));
	}

	for(int i = 0 ; i < applenum ; ++i)
	{
		this->apples.push_back(new Apple(rand() % x, rand() % y));
	}
	this->printer->prepareGliders(gliders);
	this->printer->print();
}

NeuralGliderGame::~NeuralGliderGame()
{
	delete this->printer;
}

int NeuralGliderGame::getNumberOfGliders()
{
	return gliders.size();
}

int NeuralGliderGame::getNumberOfApples()
{
	return apples.size();
}

Direction* NeuralGliderGame::getRandomDirection()
{
	int num = rand() % 4;
	switch(num)
	{
	case 0: return Direction::up();
	case 1: return Direction::left();
	case 2: return Direction::down();
	case 3: return Direction::right();
	default: throw ingex;
	}
}

