#include "Position.hpp"

namespace negli
{
	class Object {
	public:	
		Position pos;

		Object(int x, int y) : pos(x,y) {}
		~Object() {}
	};
}
