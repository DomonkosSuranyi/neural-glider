#include <ann/NeuralNet.hpp>

using namespace ann;

NeuralNet::NeuralNet(const std::vector<Layer>& layers): layers(layers)
{
    if(layers.empty())
        throw "There should be at least 2 layers in the neural network";
}

NeuralNet::~NeuralNet() {}

const std::vector<int> NeuralNet::calculate(const std::vector<int> inputs) const
{
    std::vector<int> cumulativeInputs = inputs;
    for(const auto layer : this->layers)
    {
        cumulativeInputs = layer.calculateOutputs(cumulativeInputs);
    }

    return cumulativeInputs;
}
