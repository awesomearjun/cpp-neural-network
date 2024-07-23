#pragma once

class Neuron
{
public:
	int inputNumber;
	int *inputs;
	int weight;
	int bias;

	int *outputs();
};
