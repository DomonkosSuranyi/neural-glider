#include <negli/Direction.hpp>
#include "igloo/igloo.h"

using namespace igloo;
using negli::Direction;

Context(The_instances_of_Direction_class)
{
	static void TearDownContext()
	{
		Direction::destructInstances();
	}
	Spec(Should_be_only_one_UP_instance)
	{
		Direction* upInstance = Direction::up();
		Assert::That(upInstance, Equals(Direction::up()));
	}

	Spec(Should_be_only_one_LEFT_instance)
	{
		Direction* leftInstance = Direction::left();
		Assert::That(leftInstance, Equals(Direction::left()));
	}

	Spec(Should_be_only_one_DOWN_instance)
	{
		Direction* downInstance = Direction::down();
		Assert::That(downInstance, Equals(Direction::down()));
	}

	Spec(Should_be_only_one_RIGHT_instance)
	{
		Direction* rightInstance = Direction::right();
		Assert::That(rightInstance, Equals(Direction::right()));
	}
};

