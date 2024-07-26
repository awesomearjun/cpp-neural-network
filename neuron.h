#pragma once
#include <vector>

float eLU(float x, float alpha);

class Neuron
{
public:
	std::vector<std::variant<ValueNeuron, Neuron>> nextNeurons;
	int inputNumber;
	std::vector<float> inputs;
	float weight;
	float bias;

	float *outputs();
};

class ValueNeuron
{
public:
	std::vector<std::variant<ValueNeuron*, Neuron*>> nextNeurons;
	float value;
};