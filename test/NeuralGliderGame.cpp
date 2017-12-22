#include <igloo/igloo.h>
#include <negli/NeuralGliderGame.hpp>
#include <negli/consolePrinter/ConsolePrinter.hpp>

using namespace igloo;
using negli::NeuralGliderGame;

Context(The_ctor_of_the_class_NeuralGliderGame)
{
//	Spec(Should_generate_specific_number_of_gliders_and_apples)
//	{
//		negli::NeuralGliderGame ngg = NeuralGliderGame(100,100,5,2);
//		Assert::That(ngg.getNumberOfGliders(), Equals(5));
//		Assert::That(ngg.getNumberOfApples(),  Equals(2));
//	}

	Spec(asdasdasdasd)
	{
		negli::AreaPrinter printer = negli::ConsolePrinter();
		negli::NeuralGliderGame ngg = NeuralGliderGame(10,10,5,5, printer);
	}
};
