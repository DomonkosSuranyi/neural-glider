#include <negli/Position.hpp>
#include <igloo/igloo.h>

using namespace igloo;

Context(A_newly_constructed_Position)
{
    Spec(Should_have_x_and_y_coordinates)
    {
        negli::Position pos = negli::Position(2,9);
        Assert::That(pos.x, Equals(2));
        Assert::That(pos.y, Equals(9));
    }
};

Context(The_plusequals_operator)
{
	Spec(Should_add_the_coordinates)
	{
		negli::Position pos = negli::Position(5,-3);
		negli::Position pos1 = negli::Position(-5,3);

		pos += pos1;
		Assert::That(pos.x, Equals(0));
		Assert::That(pos.y, Equals(0));
	}
};
