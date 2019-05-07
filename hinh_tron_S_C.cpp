#include <iostream>
// #define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
/*#include "point.h"
#include "hinh_tron.h"
#include "point.cpp"
#include "hinh_tron.cpp"*/
using namespace std;
class point
{
	private:
		double x;
		double y;
	public:
		point();
		point(double ,double );
		//setters
		void setX(double);
		void setY(double);
		//getters
		double getX()const;
		double getY()const;
};	

class HT
{
private:
	point tam;
	double I;
public:
	HT();
	HT(point tam,double I);
	HT(double,double,double);
	bool settam(const point &);
	bool settam(double,double);
	bool setI(double);
	point gettam();
	double getI()const;
	double getS()const;
	double getC()const;

};
int main()
{
	point a;
	a.setX(4.0);
	a.setY(6.0);
	HT t(a,2.0);
	cout<<t.getS()<<endl;
	return 0;
}
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
HT::HT(){
	this ->I=0.0;
	this ->tam=point(0.0,0.0);
}
HT::HT(point tam,double I)
{
	this ->tam=tam;
	this ->I=I;
}
HT::HT(double x,double y,double i):tam(x,y),I(i){}
 bool HT::settam(const point &a)
 {
	this ->tam=a;
 	return true;
 }
 bool HT::setI(double a)
 {
 	this ->I=a;
 	return true;
 }
 bool HT::settam(double a,double b)
 {
 	this->tam=point(a,b);
 //	this ->I=I;
 	return true;
 } 
point HT::gettam()
{
	return this->tam;
}
double HT::getI()const
{
	return this->I;
}
double HT::getS()const
{
	return 3.14*I*I;
}
double HT::getC()const
{
	return 2*3.14*I;
}