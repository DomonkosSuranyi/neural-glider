#ifndef _NEGLI_APPLE_HPP_INC
#define _NEGLI_APPLE_HPP_INC

#include "Object.hpp"

namespace negli
{
	class Apple : public Object
	{
	public:
		Apple(int x, int y) : Object(x,y) {}
		~Apple() {}
	};
}
#endif

