#include <ann/Neuron.hpp>

using namespace ann;

Neuron::Neuron(const std::vector<float> weights, const float bias)
    : weights(weights), bias(bias) {}

Neuron::~Neuron() {}

const int Neuron::calculateOutput(const std::vector<int> inputs) const {
    if(inputs.size() != this->weights.size())
        throw "Number of inputs differ from number of weights";

    int result = 0;
    for(int i = 0 ; i < (int)inputs.size() ; ++i)
    {
        result += inputs[i] * this->weights[i];
    }

    return result >= this->bias;
}
