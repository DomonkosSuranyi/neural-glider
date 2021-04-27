#include <negli/Direction.hpp>

namespace negli {
    Direction turnClockwise(const Direction original)
    {
        return static_cast<Direction>((static_cast<int>(original) + 5) % 4);
    }

    Direction turnCounterClockwise(const Direction original)
    {
        return static_cast<Direction>((static_cast<int>(original) + 3) % 4);
    }

    Position asVelocity(const Direction direction)
    {
        switch(direction)
        {
        case Direction::UP:
            return Position(0, -1);
        case Direction::RIGHT:
            return Position(1, 0);
        case Direction::DOWN:
            return Position(0, 1);
        case Direction::LEFT:
            return Position(-1, 0);
        }

        throw "Invalid direction";
    }
}
