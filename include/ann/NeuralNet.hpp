#ifndef ANN_NEURALNET_HPP_INC
#define ANN_NEURALNET_HPP_INC

#include <vector>
#include <ann/Layer.hpp>

namespace ann
{
    class NeuralNet
    {
    public:
        NeuralNet(const std::vector<Layer>& layers);
        ~NeuralNet();

        const std::vector<int> calculate(const std::vector<int>) const;
    private:
        const std::vector<Layer> layers;
    };
}

#endif
