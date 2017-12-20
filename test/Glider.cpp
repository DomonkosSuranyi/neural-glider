#include <igloo/igloo.h>
#include <negli/Glider.hpp>

using namespace igloo;
using negli::Glider;

Context(A_simple_glider)
{
	Spec(Should_have_init_position_and_direction_via_ctor)
	{
		Glider glider = Glider(-5,22, negli::Direction::up());
		Assert::That(glider.pos.x, Equals(-5));
		Assert::That(glider.pos.y, Equals(22));
		Assert::That(glider.getDirection(), Equals(negli::Direction::up()));
	}

};
