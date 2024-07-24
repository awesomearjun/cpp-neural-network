#include "neuron.h"
#include <vector>
#include "structs.h"

class NeuralNetwork
{
    public:
        int *inputs;

        void layers(std::vector<std::variant<ValueLayer, Layer>> layers) {
            // pass it into other functions
        };
        void eLU(int *outputs, int alpha);
        void SGD(int learningRate);
        void forwardPass(int *outputs);
        void backwardPass();
};