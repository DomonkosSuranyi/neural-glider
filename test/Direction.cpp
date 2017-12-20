#include <negli/Direction.hpp>
#include "igloo/igloo.h"

using namespace igloo;
using negli::Direction;

Context(The_UP_instance_of_Direction_class)
{
	Spec(Should_be_the_only_one_UP_instance)
	{
		Assert::That(Direction::up(), Equals(Direction::up()));
	}

	Spec(Should_have_a_vector_0_minus1)
	{
		Assert::That(Direction::up()->vector.x, Equals(0));
		Assert::That(Direction::up()->vector.y, Equals(-1));
	}

	Spec(Should_have_clockwise_neighbour_RIGHT)
	{
		Assert::That(Direction::turnRight(Direction::up()), Equals(Direction::right()));
	}

	Spec(Should_have_cclockwise_neighbour_LEFT)
	{
		Assert::That(Direction::turnLeft(Direction::up()), Equals(Direction::left()));
	}
};

Context(The_LEFT_instance_of_Direction_class)
{
	Spec(Should_be_the_only_one_LEFT_instance)
	{
		Assert::That(Direction::left(), Equals(Direction::left()));
	}

	Spec(Should_have_a_vector_minus1_0)
	{
		Assert::That(Direction::left()->vector.x, Equals(-1));
		Assert::That(Direction::left()->vector.y, Equals(0));
	}

	Spec(Should_have_clockwise_neighbour_UP)
	{
		Assert::That(Direction::turnRight(Direction::left()), Equals(Direction::up()));
	}

	Spec(Should_have_cclockwise_neighbour_DOWN)
	{
		Assert::That(Direction::turnLeft(Direction::left()), Equals(Direction::down()));
	}
};

Context(The_DOWN_instance_of_Direction_class)
{
	Spec(Should_be_the_only_one_DOWN_instance)
	{
		Assert::That(Direction::down(), Equals(Direction::down()));
	}

	Spec(Should_have_a_vector_0_1)
	{
		Assert::That(Direction::down()->vector.x, Equals(0));
		Assert::That(Direction::down()->vector.y, Equals(1));
	}

	Spec(Should_have_clockwise_neighbour_LEFT)
	{
		Assert::That(Direction::turnRight(Direction::down()), Equals(Direction::left()));
	}

	Spec(Should_have_cclockwise_neighbour_RIGHT)
	{
		Assert::That(Direction::turnLeft(Direction::down()), Equals(Direction::right()));
	}
};

Context(The_RIGHT_instance_of_Direction_class)
{
	Spec(Should_be_the_only_one_RIGHT_instance)
	{
		Assert::That(Direction::right(), Equals(Direction::right()));
	}

	Spec(Should_have_a_vector_1_0)
	{
		Assert::That(Direction::right()->vector.x, Equals(1));
		Assert::That(Direction::right()->vector.y, Equals(0));
	}

	Spec(Should_have_clockwise_neighbour_DOWN)
	{
		Assert::That(Direction::turnRight(Direction::right()), Equals(Direction::down()));
	}

	Spec(Should_have_cclockwise_neighbour_UP)
	{
		Assert::That(Direction::turnLeft(Direction::right()), Equals(Direction::up()));
	}
};

