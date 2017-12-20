#ifndef NEGLI_DIRECTION_HPP_INC
#define NEGLI_DIRECTION_HPP_INC

#define UP_VECTOR    0,-1
#define LEFT_VECTOR  -1,0
#define DOWN_VECTOR  0,1
#define RIGHT_VECTOR 1,0

#include "Position.hpp"

namespace negli {
	class Direction
	{
	public:
		static Direction* up();

		static Direction* left();

		static Direction* down();

		static Direction* right();

		static Direction* turnLeft(Direction*);

		static Direction* turnRight(Direction*);

		const Position vector;

		~Direction() {}

	private:
		Direction* cwNext;
		Direction* ccwNext;

		static Direction UP;
		static Direction LEFT;
		static Direction DOWN;
		static Direction RIGHT;

		Direction(int vect_x, int vect_y, Direction* cw, Direction* ccw)
		  : vector(vect_x, vect_y) , cwNext(cw), ccwNext(ccw) {}

		static void constructInstances();
	};
}
#endif
