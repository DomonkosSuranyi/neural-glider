#ifndef NEGLI_GLIDER_HPP_INC
#define NEGLI_GLIDER_HPP_INC

#include "Position.hpp"
#include "Direction.hpp"
#include "Object.hpp"

namespace negli {
	class Glider : public Object
	{
	public:

		Glider(int, int, Direction*);
		~Glider();

		void stepForward();
		void turnLeft();
		void turnRight();
		Direction* getDirection();

	private:

		Direction* direction;
  };
}
#endif

