#ifndef _NEGLI_NEURALGLIDERGAME_HPP_INC
#define _NEGLI_NEURALGLIDERGAME_HPP_INC

#include "Glider.hpp"
#include "Apple.hpp"
#include <vector>

namespace negli
{
    enum Tile
    {
        EMPTY,
        APPLE,
        GLIDER_UP,
        GLIDER_RIGHT,
        GLIDER_DOWN,
        GLIDER_LEFT,
    };

    class NeuralGliderGame
    {
    public:
        NeuralGliderGame(int,int,int,int);

        ~NeuralGliderGame();

        const int getNumberOfGliders() const;

        const int getNumberOfApples() const;

        const std::vector<std::vector<Tile>> getTileMatrix() const;

        const Position mapSize;
    private:
        std::vector<Glider> gliders;
        std::vector<Apple> apples;
    };
}
#endif

