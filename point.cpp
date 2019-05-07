#include <bits/stdc++.h>

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
	point a;
	a.setX(4.0);
	a.setY(6.0);
	point b(2.0,2.0);
	HCN c(a,b);
	cout<<c.getS()<<endl;
	cout<<c.getC()<<endl;
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
void point::setY(double b)ude 
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
	this->tl=a;
	return true;
}
bool HCN::setbr(const point &b)
{
	this->br=b;
	return true;
}
bool HCN::settl(double a,double b)
{
	this->tl=point(a,b);
	return true;
}
bool HCN::setbr(double a,double b)
{
	this->br=point(a,b);
	return true;
}
point HCN::gettl()const
{
	return this->tl;
}
point HCN::getbr()const
{
	return this->br;
}
double HCN::getS()const
{
	return abs(br.getX()-tl.getX())*abs(tl.getY()-br.getY());
}
double HCN::getC()const
{
	return (abs(br.getX()-tl.getX())+abs(tl.getY()-br.getY()))*2;
}


