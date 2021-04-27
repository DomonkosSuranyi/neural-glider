#include <negli/Direction.hpp>
#include "catch.hpp"

using namespace negli;

TEST_CASE("Direction rotation", "[direction]")
{
    SECTION("turn clockwise")
    {
        REQUIRE(turnClockwise(Direction::UP) == Direction::RIGHT);
        REQUIRE(turnClockwise(Direction::RIGHT) == Direction::DOWN);
        REQUIRE(turnClockwise(Direction::DOWN) == Direction::LEFT);
        REQUIRE(turnClockwise(Direction::LEFT) == Direction::UP);
    }

    SECTION("turn counter clockwise")
    {
        REQUIRE(turnCounterClockwise(Direction::UP) == Direction::LEFT);
        REQUIRE(turnCounterClockwise(Direction::RIGHT) == Direction::UP);
        REQUIRE(turnCounterClockwise(Direction::DOWN) == Direction::RIGHT);
        REQUIRE(turnCounterClockwise(Direction::LEFT) == Direction::DOWN);
    }
}

