#include "catch.hpp"
#include <ann/Neuron.hpp>

using namespace ann;

TEST_CASE("Neuron output calculation", "[neuron]")
{
    std::vector<float> weights{0.1, 1.0, 10.0};
    Neuron neuron = Neuron(weights, 10.0);

    SECTION("Under bias")
    {
        std::vector<int> inputs{1, 1, 0};
        REQUIRE(neuron.calculateOutput(inputs) == 0);
    }

    SECTION("Equal to bias")
    {
        std::vector<int> inputs{0, 0, 1};
        REQUIRE(neuron.calculateOutput(inputs) == 1);
    }

    SECTION("Over bias")
    {
        std::vector<int> inputs{1, 0, 1};
        REQUIRE(neuron.calculateOutput(inputs) == 1);
    }
}
