#include <negli/Direction.hpp>
#include "igloo/igloo.h"

using namespace igloo;
using negli::Direction;

Context(The_UP_instance_of_Direction_class)
{
	Spec(Should_be_the_only_UP_instance)
	{
		Direction* upInstance = Direction::up();
		Assert::That(upInstance, Equals(Direction::up()));
		Direction::destructInstances();
	}
};
