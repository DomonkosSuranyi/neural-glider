#ifndef NEGLI_POSITION_HPP_INC
#define NEGLI_POSITION_HPP_INC

namespace negli {
    class Position
    {
    public:
        int x, y;

        Position(int p_x, int p_y) : x(p_x), y(p_y) {}
        ~Position() {}

        Position operator+=(const Position& posToAdd)
        {
            this->x += posToAdd.x;
            this->y += posToAdd.y;
            return *this;
        }
    };
}
#endif

