#ifndef NEGLI_GLIDER_HPP_INC
#define NEGLI_GLIDER_HPP_INC

#include "Position.hpp"
#include "Direction.hpp"
#include "Object.hpp"

namespace negli {
	class Glider : public Object
	{
	public:

		Glider(int, int, const Direction&);
		~Glider();

		void stepForward();
		void turnLeft();
		void turnRight();
		const Direction& getDirection();

	private:

		const Direction* direction;
  };
}
#endif

