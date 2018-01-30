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
		static const Direction& up();

		static const Direction& left();

		static const Direction& down();

		static const Direction& right();

		const Direction& turnLeft() const;

		const Direction& turnRight() const;

		const Position vector;

		~Direction() {}

	private:
		const Direction& cwNext;
		const Direction& ccwNext;

		static const Direction UP;
		static const Direction LEFT;
		static const Direction DOWN;
		static const Direction RIGHT;

		Direction(int vect_x, int vect_y, const Direction& cw, const Direction& ccw)
		  : vector(vect_x, vect_y) , cwNext(cw), ccwNext(ccw) {}

	};
}
#endif

