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

		const Position vector;

		static Direction* up();

		static Direction* left();

		static Direction* down();

		static Direction* right();

		static void destructInstances();

	private:
		static Direction* UP;
		static Direction* LEFT;
		static Direction* DOWN;
		static Direction* RIGHT;

		Direction(int vect_x, int vect_y) : vector(vect_x, vect_y) {}

		~Direction() {}
	};
}
#endif
