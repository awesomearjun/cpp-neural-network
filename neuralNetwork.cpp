#include "neuron.h"
#include <vector>
#include "structs.h"
#include <type_traits>

class NeuralNetwork
{
    public:
        void layers(ValueLayer inputs, std::vector<std::vector<Layer>> hidden, std::vector<ValueLayer> outs) {
            
        };
        void SGD(int learningRate);
        void valueHiddenPass(ValueLayer values, Layer hidden)
        {
           for (ValueNeuron value : values.values)
           {
                for (Neuron neuron : hidden.neurons)
                {
                    value.nextNeurons.push_back(&neuron);
                }
           }

           std::vector<float> nextNeuronInputs;

           for (ValueNeuron value : values.values)
           {
                nextNeuronInputs.push_back(value.value);
           }

           for (ValueNeuron value : values.values)
           {
                for (int i = 0; i < size(value.nextNeurons); i++)
                {
                    value.nextNeurons[i]->inputs = nextNeuronInputs;
                }
           }
           
        };
        void hiddenPass(std::vector<float> inputs)
        {

        };
        void hiddenValuePass(std::vector<float> inputs)
        {

        };

        void backwardPass();
};