#pragma once
#include "structs.h"
#include <vector>

class NeuralNetwork
{
public:
    void layers(ValueLayer ins, std::vector<std::vector<Layer>> hidden, std::vector<ValueLayer> outs);
    void SGD(int learningRate);
    void forwardPass(std::vector<float> inputs);
    void backwardPass();
};