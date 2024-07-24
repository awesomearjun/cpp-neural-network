#pragma once
#include "structs.h"

class NeuralNetwork
{
public:
    int *inputs;

    void layers(int layerCount, int neuronCount);
    void eLU(int *outputs, int alpha);
    void SGD(int learningRate);
    void forwardPass(int *outputs);
    void backwardPass();
};