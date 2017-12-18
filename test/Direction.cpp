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

	Spec(Should_have_fixed_Position)
	{
		Assert::That(Direction::up()->vector.x, Equals(0));
		Assert::That(Direction::up()->vector.y, Equals(-1));

		Assert::That(Direction::left()->vector.x, Equals(-1));
		Assert::That(Direction::left()->vector.y, Equals(0));

		Assert::That(Direction::down()->vector.x, Equals(0));
		Assert::That(Direction::down()->vector.y, Equals(1));

		Assert::That(Direction::right()->vector.x, Equals(1));
		Assert::That(Direction::right()->vector.y, Equals(0));
	}
};

