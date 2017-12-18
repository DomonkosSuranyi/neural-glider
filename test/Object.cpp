#include <igloo/igloo.h>
#include <negli/Object.hpp>

using namespace igloo;

Context(The_instance_of_the_Object_class)
{
	Spec(Should_have_a_constructor_that_initializes_position_value)
	{
		negli::Object newObject = negli::Object(5,9);
		Assert::That(newObject.pos.x, Equals(5));
		Assert::That(newObject.pos.y, Equals(9));
	}
};
