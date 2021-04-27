#ifndef NEGLI_DIRECTION_HPP_INC
#define NEGLI_DIRECTION_HPP_INC

#include <negli/Position.hpp>

namespace negli {
    enum Direction
    {
        UP = 0,
        RIGHT,
        DOWN,
        LEFT
    };

    Direction turnClockwise(const Direction);
    Direction turnCounterClockwise(const Direction);

    Position asVelocity(const Direction);
}
#endif

