#ifndef _NEGLI_NEURALGLIDERGAME_HPP_INC
#define _NEGLI_NEURALGLIDERGAME_HPP_INC

#include "Glider.hpp"
#include "Apple.hpp"
#include <map>
#include <vector>

namespace negli
{
	class NeuralGliderGame
	{
	public:
		NeuralGliderGame(int,int,int,int);

		~NeuralGliderGame();

		int getNumberOfGliders();

		int getNumberOfApples();
	private:
		const Position mapSize;
		const int numberOfGliders;
		const int numberOfApples;
		std::vector<Glider*> gliders;
		std::vector<Apple*> apples;

		const Direction& getRandomDirection();
	};
}
#endif

