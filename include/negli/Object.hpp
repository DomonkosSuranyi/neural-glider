#ifndef NEGLI_OBJECT_HPP_INC_
#define NEGLI_OBJECT_HPP_INC_

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
#endif

