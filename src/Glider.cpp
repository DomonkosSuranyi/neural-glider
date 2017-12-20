#include <negli/Glider.hpp>

using namespace negli;

Glider::Glider(int x, int y, Direction* initDir) : Object(x,y), direction(initDir) {}

Glider::~Glider() {}

void Glider::stepForward()
{
	this->pos += this->direction->vector;
}

void Glider::turnLeft()
{
	this->direction = Direction::turnLeft(this->direction);
}

void Glider::turnRight()
{
	this->direction = Direction::turnRight(this->direction);
}

Direction* Glider::getDirection()
{
	return this->direction;
}
