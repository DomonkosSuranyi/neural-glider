#include <igloo/igloo.h>
#include <negli/NeuralGliderGame.hpp>

using namespace igloo;
using negli::NeuralGliderGame;

Context(The_ctor_of_the_class_NeuralGliderGame)
{
	Spec(Should_generate_specific_number_of_gliders_and_apples)
	{
		negli::NeuralGliderGame ngg = NeuralGliderGame(100,100,5,2);
		Assert::That(ngg.getNumberOfGliders(), Equals(5));
		Assert::That(ngg.getNumberOfApples(),  Equals(2));
	}
};
