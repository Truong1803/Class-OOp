#include "hinh_tron"
HT::HT():tam(0.0,0.0),double I=0.0{}
HT::HT(point tam,double I)
{
	this ->tam=tam;
	this ->I=I;
}
HT::HT(double x,double y,double I):tam(x,y),double I{}
bool settam(const point &a)
{
	this ->tam=a;
	return true;
}
bool setI(double a)
{
	this ->I=a;
	return true;
}
bool settam(double a,double b,double I)
{
	this->tam=point(a,b);
	this ->I=I;
	return true;
} 
point gettam()
{
	return this->tam;
}
double getS()const
{
	return PI*I*I;
}
double getC()const
{
	return 2*PI*I;
}