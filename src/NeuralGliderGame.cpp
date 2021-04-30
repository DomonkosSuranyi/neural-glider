#include <negli/NeuralGliderGame.hpp>
#include <stdlib.h>
#include <ctime>

using namespace negli;
using negli::NeuralGliderGame;

Direction getRandomDirection()
{
    int num = rand() % 4;
    return static_cast<Direction>(num);
}

NeuralGliderGame::NeuralGliderGame(int x, int y, int glidernum, int applenum)
    : mapSize(x,y)
{
    srand((unsigned) time(0));
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

const std::vector<std::vector<Tile>> NeuralGliderGame::getTileMatrix() const
{
    std::vector<std::vector<Tile>> matrix(this->mapSize.x, std::vector<Tile>(this->mapSize.y, Tile::EMPTY));

    for(auto glider : this->gliders)
    {
        Tile* element = &matrix[glider.pos.x][glider.pos.y];
        switch(glider.getDirection())
        {
        case Direction::UP:
            *element = Tile::GLIDER_UP;
            break;
        case Direction::RIGHT:
            *element = Tile::GLIDER_RIGHT;
            break;
        case Direction::DOWN:
            *element = Tile::GLIDER_DOWN;
            break;
        case Direction::LEFT:
            *element = Tile::GLIDER_LEFT;
            break;
        default:
            throw "Illegal Tile kind";
        }
    }

    for(auto apple : this->apples)
    {
        matrix[apple.pos.x][apple.pos.y] = Tile::APPLE;
    }

    return matrix;


}
