#ifndef NEGLI_DIRECTION_HPP_INC
#define NEGLI_DIRECTION_HPP_INC

#define UP_VECTOR    0,-1
#define LEFT_VECTOR  -1,0
#define DOWN_VECTOR  0,1
#define RIGHT_VECTOR 1,0

#include <Position>

namespace negli {
	class Direction
	{
	public:
		Direction* up()
		{
			if(UP == NULL)
            UP = new Direction(UP_VECTOR);
			return UP;
		}

		Direction* left()
		{
			if(LEFT == NULL)
			LEFT = new Direction(LEFT_VECTOR);
			return LEFT;
		}

		Direction* down()
		{
			if(DOWN == NULL)
			DOWN = new Direction(DOWN_VECTOR);
			return DOWN;
		}

		Direction* right()
		{
			if(RIGHT == NULL)
            RIGHT = new Direction(RIGHT_VECTOR);
			return RIGHT;
		}

		static void destructInstances()
		{
			delete up();
			delete left();
			delete down();
			delete right();
		}

	private:
		static Direction* UP;
		static Direction* LEFT;
		static Direction* DOWN;
		static Direction* RIGHT;

		Position vector;

		Direction(int vect_x, int vect_y)
		{
			vector = Position(vect_x, vect_y);
		}

		~Direction() {}
}
#endif
