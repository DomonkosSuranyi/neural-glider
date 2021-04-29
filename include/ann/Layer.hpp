#ifndef ANN_LAYER_HPP_INC
#define ANN_LAYER_HPP_INC

#include <vector>
#include "Neuron.hpp"

namespace ann
{
    class Layer
    {
    public:
        Layer(const std::vector<Neuron>&);
        ~Layer();
        const std::vector<int> calculateOutputs(const std::vector<int>&) const;

    private:
        const std::vector<Neuron> neurons;
    };
}

#endif
