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
		double getX();
		double getY();
};	
class HCN
{
	private:
		point tl;//top-left
		point br;//bot-right
	public:
		HCN();
		HCN(point tl,point br);
		HCN(double ,double ,double ,double );
		//setters	
		bool settl(const point &);
		bool setbr(const point &);
		bool settl(double,double);
		bool setbr(double,double);
		//getters
		point gettl() const;
		point getbr() const;
		//methods
		double getS() const;//s-area
		double getC() const;//c-perimeter
};

int main()
{
	
}
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
HCN::HCN():tl(0.0,0.0),br(0.0,0.0){}
HCN::HCN(point tl,point br)
{
	this->tl=tl;
	this->br=br;
}
HCN::HCN(double x1,double y1,double x2,double y2):tl(x1,x2),br(x2,y2){}
bool HCN::settl(const point &a)
{
	this->x=a;
	return true;
}
bool HCN::setbr(const point &b)
{
	this->x=b;
	return true;
}
bool HCN::settl(double a,double b)
{
	this->tl=point(a,b);
	return true;
}
bool HCn::setbr(double a,double b)
{
	this->br=point(a,b);
	return true;
}
point HCN::gettl()
{
	return this->tl;
}
point HCN::getbr()
{
	return this->br;
}
double HCN::getS()
{
	return abs(br.getX()-tl.getX())*abs(tl.getY()-br.getY());
}
double HCN::getC()
{
	return (abs(br.getX()-tl.getX())+abs(tl.getY()-br.getY()))*2;
}
int main()
{
	
	return 0;
}

