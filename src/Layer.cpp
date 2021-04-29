#include <ann/Layer.hpp>

using namespace ann;

Layer::Layer(const std::vector<Neuron>& neurons): neurons(neurons) {}

Layer::~Layer() {}

const std::vector<int> Layer::calculateOutputs(const std::vector<int>& inputs) const
{
    std::vector<int> outputs;
    outputs.reserve(this->neurons.size());

    // TODO this might be calculated parallelly
    for(const Neuron neuron : this->neurons)
    {
        outputs.push_back(neuron.calculateOutput(inputs));
    }
    return outputs;
}
