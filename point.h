#ifndef POINT_H
#define POINT_H
#include <iostream>
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
#endif