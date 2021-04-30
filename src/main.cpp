#include <negli/NeuralGliderGame.hpp>
#include <negli/ConsolePrint.hpp>

using namespace negli;

int main()
{
    NeuralGliderGame game = NeuralGliderGame(20, 20, 5, 5);

    negli::printGame(game);

    return 0;
}
