#pragma once
#include "structs.h"
#include <vector>

class NeuralNetwork
{
public:
    std::vector<float> inputs;

    void layers(int layerCount, int neuronCount);
    void eLU(int *outputs, int alpha);
    void SGD(int learningRate);
    void forwardPass(int *outputs);
    void backwardPass();
};