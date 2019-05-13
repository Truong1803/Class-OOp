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
        point tl;
        point br;  
public:
    HCN();
    HCN(point tl,point br);
    HCN(double,double,double,double);
    bool settl(const point &);
    bool setbr(const point &);
    bool settl(double,double);
    bool setbr(double,double);
    point gettl();
    point getbr();
    double getS();
    double getC();
};
int main()
{
    point x(4.0,6.0);
    point y(5.0,7.0);
    HCN a(x,y);
    cout<<a.getC()<<endl;
    cout<<a.getS()<<endl;
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
HCN::HCN(){
    this->tl=point(0.0,0.0);
    this->br=point(0.0,0.0);
}
HCN::HCN(point tl,point br){
    this->tl=tl;
    this->br=br;
}
HCN::HCN(double x,double y,double x1,double y1):tl(x,y),br(x1,y1){
}
bool HCN::settl(const point & a){
    this -> tl=a;
    return true;
}
bool HCN::setbr(const point & b){
    this -> br=b;
    return true;
}
bool HCN::settl(double x,double y){
    this -> tl=point(x,y);
    return true;
}
bool HCN::setbr(double x,double y){
    this -> br=point(x,y);
    return true;
}
point HCN::gettl(){
    return this->tl;
}
point HCN::getbr(){
    return this->br;
}
double HCN::getS(){
    return abs(tl.getX()-br.getX())*abs(tl.getY()-br.getY());
}
double HCN::getC(){
    return (abs(tl.getX()-br.getX())+abs(br.getY()-tl.getY()))*2;
}