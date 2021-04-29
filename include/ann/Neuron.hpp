#ifndef ANN_NEURON_HPP_INC
#define ANN_NEURON_HPP_INC

#include <vector>

namespace ann {
    class Neuron
    {
    public:
        Neuron(const std::vector<float>, const float);
        ~Neuron();

        const int calculateOutput(const std::vector<int> inputs) const;
    private:
        const std::vector<float> weights;
        const float bias;
    };
}
#endif
