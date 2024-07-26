#include "struct.h";
#include <vector>
#include "neuron.h"
#include <algorithm>

struct Layer
{
    int neuronCount;
    mutable std::vector<Neuron> neurons;
    
    void fillData() 
    {
        for (int i = 0; i < neuronCount; i++)
        {
            neurons.push_back(Neuron());
        };
    };
};

struct ValueLayer
{
    int valueCount;
    std::vector<ValueNeuron> values;

    void fillData() 
    {
        for (int i = 0; i < valueCount; i++)
        {
            values.push_back(ValueNeuron());
        };
    };
};