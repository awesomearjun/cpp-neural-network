#include <vector>
#include "neuron.h"

#pragma once

struct Layer
{
    int neuronCount;
    std::vector<Neuron> neurons;
};

struct ValueLayer
{
    int valueCount;
    std::vector<ValueNeuron> values;
};