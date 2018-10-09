#include "pch.h"
#include "comlexnum.h"


comlexnum::comlexnum()
{

	this->x = 0;
	this->y = 0;

}

void comlexnum::add(comlexnum comlex) {
	this->x += comlex.x;
	this->y += comlex.y;

	double real = this->x + comlex.x;
}

void comlexnum::setX(double x)
{
	this->x = x;
}

void comlexnum::setY(double y)
{
	this->y = y;
}


double comlexnum::getX()
{
	return x;
}

double comlexnum::getY()
{
	return y;
}
