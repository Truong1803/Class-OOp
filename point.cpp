#include "point.h"
point::point(){}
point::point(double a,double b)
{
	this -> x=a;
	this ->y=b;
}
void point::setX(double a)
{
	this ->x=a;
}
void point::setY(double b)
{
	this ->y=b;
}
double point::getX()const
{
	return this->x;
}
double point::getY()const
{
	return this->y;
}