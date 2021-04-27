#include <negli/Glider.hpp>
#include "catch.hpp"

using negli::Glider;

TEST_CASE("Glider ctor, position and direction", "[glider]")
{
    Glider glider = Glider(-5, 22, negli::Direction::UP);
    REQUIRE(glider.pos.x == -5);
    REQUIRE(glider.pos.y == 22);
    REQUIRE(glider.getDirection() == negli::Direction::UP);
}

TEST_CASE("Glider rotation", "[glider]")
{
    Glider glider = Glider(0, 0, negli::Direction::DOWN);
    SECTION("turn left")
    {
        glider.turnLeft();
        REQUIRE(glider.getDirection() == negli::Direction::RIGHT);
        glider.turnLeft();
        REQUIRE(glider.getDirection() == negli::Direction::UP);
    }

    SECTION("turn right")
    {
        glider.turnRight();
        REQUIRE(glider.getDirection() ==  negli::Direction::LEFT);
        glider.turnRight();
        REQUIRE(glider.getDirection() ==  negli::Direction::UP);
    }
}
