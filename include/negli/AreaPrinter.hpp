#ifndef _NEGLI_AREAPRINTER_HPP_INC
#define _NEGLI_AREAPRINTER_HPP_INC

namespace negli
{
	class AreaPrinter
	{
	public:
		AreaPrinter();
		~AreaPrinter();
		void prepareGliders() = 0;
		void prepareApples() = 0;
	};
}
#endif

