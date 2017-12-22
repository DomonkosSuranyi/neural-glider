#ifndef _NEGLI_AREAPRINTER_HPP_INC
#define _NEGLI_AREAPRINTER_HPP_INC
#include <vector>
#include <negli/NeuralGliderGame.hpp>

namespace negli
{
	class AreaPrinter
	{
	public:
		AreaPrinter();
		virtual ~AreaPrinter() = 0;
		virtual void resetMap(const Position &mapSize) = 0;
		virtual void prepareGliders(std::vector<Glider*>) = 0;
		virtual void prepareApples() = 0;
		virtual void print() = 0;
	protected:
		const Position* mapSize;
	};
}
#endif

