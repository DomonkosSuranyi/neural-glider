#include <negli/Glider.hpp>

using namespace negli;

Glider::Glider(int x, int y, Direction initDir) : Object(x,y), direction(initDir) {}

Glider::~Glider() {}

void Glider::stepForward()
{
    this->pos += asVelocity(this->direction);
}

void Glider::turnLeft()
{
    this->direction = turnCounterClockwise(this->direction);
}

void Glider::turnRight()
{
    this->direction = turnClockwise(this->direction);
}

const Direction Glider::getDirection()
{
    return this->direction;
}
