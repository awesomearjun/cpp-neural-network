#include <cstdlib>
#include <iostream>
#include <vector>
#include "neuron.h"
#include <cmath>

float eLU(float x, float alpha)
{
    return (x > 0) ? x : (alpha*(exp(x) - 1));
};

class Neuron
{
    public:
        std::vector<std::variant<ValueNeuron, Neuron>> nextNeurons;
        std::vector<float> inputs;
        float weight = -100 + (rand() % 100);
        float bias = -50 + (rand() % 50);

        std::vector<float> getOutputs()
        {
            for (int i = 0; i < size(inputs); i++)
            {
                inputs[i] *= weight + bias;
                inputs[i] = eLU(inputs[i], 0.5);
            }

            return inputs;
        }
};


class ValueNeuron
{
    public:
        std::vector<std::variant<ValueNeuron*, Neuron*>> nextNeurons;
        float value;

        int getOutputs()
        {
            value = eLU(value, 0.5);
            return value;
        }
};
