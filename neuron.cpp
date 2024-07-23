#include <cstdlib>
#include <iostream>

class Neuron
{
    public:
        int inputNumber;
        int *inputs = new int[inputNumber];
        int weight = -100 + (rand() % 100);
        int bias = -50 + (rand() % 50);

        int *outputs()
        {
            for (int i = 0; i > inputNumber; i++)
            {
                inputs[i] *= weight + bias;
            }

            return inputs;
        }
};