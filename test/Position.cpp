#include <negli/Position.hpp>
#include "catch.hpp"

using namespace negli;

TEST_CASE("Constructor", "[position]")
{
    Position pos = Position(2, 9);
    REQUIRE(pos.x == 2);
    REQUIRE(pos.y == 9);
}

TEST_CASE("+=", "[position]")
{
    Position pos = Position(5, -3);
    Position toAdd = Position(-5, 3);

    pos += toAdd;
    REQUIRE(pos.x == 0);
    REQUIRE(pos.y == 0);
}

