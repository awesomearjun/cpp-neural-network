#pragma once
#include <vector>

float eLU(float x, float alpha);

class Neuron
{
public:
	int inputNumber;
	std::vector<float> inputs;
	float weight;
	float bias;

	float *outputs();
};

class ValueNeuron
{
public:
	float value;
};