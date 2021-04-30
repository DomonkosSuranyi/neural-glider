#include <negli/ConsolePrint.hpp>
#include <string>
#include <iostream>

using namespace negli;

std::string createHorizontalBorder(const int length)
{
    std::string border = std::string("+");
    for(int i = 0 ; i < length ; ++i)
    {
        border.push_back('-');
    }
    border.push_back('+');
    return border;
}

void negli::printGame(const NeuralGliderGame& game)
{
    auto horizontalBorder = createHorizontalBorder(game.mapSize.x);
    std::cout << horizontalBorder << std::endl;

    auto map = game.getTileMatrix();

    for(int x = 0 ; x < game.mapSize.x ; ++x)
    {
        std::string line("|");
        for(int y = 0 ; y < game.mapSize.y ; ++y)
        {
            char tile;
            switch(map[x][y])
            {
            case Tile::EMPTY:
                tile = ' ';
                break;
            case Tile::APPLE:
                tile = '@';
                break;
            case Tile::GLIDER_UP:
                tile = '^';
                break;
            case Tile::GLIDER_RIGHT:
                tile = '>';
                break;
            case Tile::GLIDER_DOWN:
                tile = 'v';
                break;
            case Tile::GLIDER_LEFT:
                tile = '<';
                break;
            default:
                throw "Illegal tile";
            }

            line.push_back(tile);
        }
        line.push_back('|');
        std::cout << line << std::endl;
    }

    std::cout << horizontalBorder << std::endl;
}
