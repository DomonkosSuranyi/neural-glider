#ifndef _NEGLI_NEURALGLIDERGAME_HPP_INC
#define _NEGLI_NEURALGLIDERGAME_HPP_INC

#include "Glider.hpp"
#include "Apple.hpp"
#include <map>
#include <vector>
#include "AreaPrinter.hpp"

namespace negli
{
	class NeuralGliderGame
	{
	public:
		NeuralGliderGame(int,int,int,int,AreaPrinter&);

		~NeuralGliderGame();

		int getNumberOfGliders();

		int getNumberOfApples();
	private:
		const Position mapSize;
		const int numberOfGliders;
		const int numberOfApples;
		std::vector<Glider*> gliders;
		std::vector<Apple*> apples;

		AreaPrinter* printer;

		Direction* getRandomDirection();
	};
}
#endif

