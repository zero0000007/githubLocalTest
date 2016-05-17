#include "course.h"



course::course(int prior, int needTime)
{
	this->prior = prior;
	this->needTime = needTime;
}

course::course()
{
}


course::~course()
{
}

void course::setPrior(int prior)
{
	this->prior = prior;
}

int course::getPrior()
{
	return prior;
}

void course::setNeedTime(int time)
{
	this->needTime = time;
}

int course::getNeedTime()
{
	return needTime;
}

void course::setId(int id)
{
	this->id = id;
}

int course::getId()
{
	return id;
}
