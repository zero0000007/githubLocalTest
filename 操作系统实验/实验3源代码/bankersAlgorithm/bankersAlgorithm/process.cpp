#include "process.h"



process::process()
{
}


process::~process()
{
}

int process::getId()
{
	return id;
}

void process::setId(int id)
{
	this->id = id;
}

int process::getState()
{
	return state;
}

void process::setState(int state)
{
	this->state = state;
}

int * process::getMax()
{
	return max;
}

void process::setMax(int max[])
{
	for (int i = 0;i<3; i++) {
		this->max[i] = max[i];
	}
}

int * process::getAllocation()
{
	return allocation;
}

void process::setAllocation(int allocation[])
{
	for (int i = 0;i<3; i++) {
		this->allocation[i] = allocation[i];
	}
}
