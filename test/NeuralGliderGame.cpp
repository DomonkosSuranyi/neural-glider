#include <negli/NeuralGliderGame.hpp>
#include "catch.hpp"

using namespace negli;

TEST_CASE("NeuralGliderGame ctor", "[nggctor]")
{
    NeuralGliderGame ngg = NeuralGliderGame(100, 100, 5, 2);
    REQUIRE(ngg.getNumberOfGliders() == 5);
    REQUIRE(ngg.getNumberOfApples() == 2);
}

