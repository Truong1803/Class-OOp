#ifndef HINH_TRON_H
#define HINH_TRON_H
#include <iostream>
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
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
	bool settI(double);
	point gettam();
	double getS()const;
	double getC()const;

};
#endif