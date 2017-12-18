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

