#include <negli/Direction.hpp>

using negli::Direction;

Direction* Direction::UP = nullptr;
Direction* Direction::LEFT = nullptr;
Direction* Direction::DOWN = nullptr;
Direction* Direction::RIGHT = nullptr;

Direction* Direction::up()
{
	if(Direction::UP == nullptr)
		Direction::UP = new Direction(UP_VECTOR);
	return Direction::UP;
}

Direction* Direction::left()
{
	if(Direction::LEFT == nullptr)
	Direction::LEFT = new Direction(LEFT_VECTOR);
	return Direction::LEFT;
}

Direction* Direction::down()
{
	if(Direction::DOWN == nullptr)
	Direction::DOWN = new Direction(DOWN_VECTOR);
	return Direction::DOWN;
}

Direction* Direction::right()
{
	if(Direction::RIGHT == nullptr)
	Direction::RIGHT = new Direction(RIGHT_VECTOR);
	return Direction::RIGHT;
}

void Direction::destructInstances()
{
	delete Direction::up();
	delete Direction::left();
	delete Direction::down();
	delete Direction::right();
}

