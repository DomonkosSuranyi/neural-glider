#ifndef _NEGLI_CONSOLEPRINTER_CONSOLEPRINTER_HPP_INC
#define _NEGLI_CONSOLEPRINTER_CONSOLEPRINTER_HPP_INC

#include "../AreaPrinter.hpp"
#include <vector>

namespace negli
{
	class ConsolePrinter : public AreaPrinter
	{
	public:
		ConsolePrinter();
		~ConsolePrinter();

	private:
		const std::vector<std::vector<char>> map;

		char getGliderChar(Glider*);
	};
}
#endif

