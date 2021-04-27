#include <negli/NeuralGliderGame.hpp>
#include <stdlib.h>

using namespace negli;
using negli::NeuralGliderGame;

Direction getRandomDirection()
{
    int num = rand() % 4;
    return static_cast<Direction>(num);
}

NeuralGliderGame::NeuralGliderGame(int x, int y, int glidernum, int applenum)
    : mapSize(x,y), numberOfGliders(glidernum), numberOfApples(applenum)
{
    for(int i = 0 ; i < glidernum ; ++i)
    {
        this->gliders.push_back(Glider(rand() % x, rand() % y, getRandomDirection()));
    }

    for(int i = 0 ; i < applenum ; ++i)
    {
        this->apples.push_back(Apple(rand() % x, rand() % y));
    }
}

NeuralGliderGame::~NeuralGliderGame() {}

const int NeuralGliderGame::getNumberOfGliders() const
{
    return gliders.size();
}

const int NeuralGliderGame::getNumberOfApples() const
{
    return apples.size();
}

