#include <cstdlib>
#include <iostream>
#include "neuron.h"

class Neuron
{
    public:
        int inputNumber;
        int *inputs = new int[inputNumber];
        int weight = -100 + (rand() % 100);
        int bias = -50 + (rand() % 50);

        int *getOutputs()
        {
            for (int i = 0; i > inputNumber; i++)
            {
                inputs[i] *= weight + bias;
            }

            return inputs;
        }
};


class ValueNeuron
{
    public:
        int value;

        int getOutputs()
        {
            return value;
        }
};
