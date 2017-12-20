#include <negli/Direction.hpp>

using negli::Direction;

Direction Direction::UP = Direction(UP_VECTOR,
		&Direction::RIGHT, &Direction::LEFT);
Direction Direction::LEFT = Direction(LEFT_VECTOR,
		&Direction::UP, &Direction::DOWN);
Direction Direction::DOWN = Direction(DOWN_VECTOR,
		&Direction::LEFT, &Direction::RIGHT);
Direction Direction::RIGHT = Direction(RIGHT_VECTOR,
		&Direction::DOWN, &Direction::UP);

Direction* Direction::up()
{
	return &Direction::UP;
}

Direction* Direction::left()
{
	return &Direction::LEFT;
}

Direction* Direction::down()
{
	return &Direction::DOWN;
}

Direction* Direction::right()
{
	return &Direction::RIGHT;
}

Direction* Direction::turnLeft(Direction* dir)
{
	dir = dir->ccwNext;
	return dir;
}

Direction* Direction::turnRight(Direction* dir)
{
	dir = dir-> cwNext;
	return dir;
}

void Direction::constructInstances()
{
}
