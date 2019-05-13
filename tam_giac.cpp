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
class triange
{
    private:
        point top1;
        point top2;
        point top3;
    public:
        triange();
        triange(point,point,point);
        triange(double,double,double,double,double,double);
        bool settop1(const point &);
        bool settop2(const point &);
        bool settop3(const point &);
        bool settop1(double,double);
        bool settop2(double,double);
        bool settop3(double,double);
        point gettop1();
        point gettop2();
        point gettop3();
        int gettriange();
        void gettriange1();
        double getS();
        double getC();
};
int main()
{
    point a(3.0,4.0);
    point b(0.0,0.0);
    point c(4.0,3.0);
    triange t(a,b,c);
    if(t.gettriange()==0)
        cout<<"3 diem khong tao thanh 1 tam giac."<<endl;
    else{
        t.gettriange1();
        cout<<"dien tich tam giac la: "<<t.getS()<<endl;
        cout<<"chu vi tam giac la: "<<t.getC()<<endl;
    }
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
triange::triange(){
    this -> top1=point(0.0,0.0);
    this -> top2=point(0.0,0.0);
    this -> top3=point(0.0,0.0);
}
triange::triange(point a,point b,point c){
    this -> top1=a;
    this -> top2=b;
    this -> top3=c;
}
triange::triange(double a,double b,double c,double d,double e,double f){
    this ->top1=point(a,b);
    this ->top2=point(c,d);
    this ->top3=point(e,f);
}
bool triange::settop1(const point & a){
    this-> top1=a;
    return true;
}
bool triange::settop2(const point & a){
    this ->top2=a;
    return true;
}
bool triange::settop3(const point & a){
    this ->top3=a;
    return true;
}
bool triange::settop1(double x,double y){
    this ->top1=point(x,y);
    return true;
}
bool triange::settop2(double x,double y){
    this->top2=point(x,y);
    return true;
}
bool triange::settop3(double x,double y){
    this->top3=point(x,y);
    return true;
}
point triange::gettop1(){
    return this->top1;
}
point triange::gettop2(){
    return this->top2;
}
point triange::gettop3(){
    return this->top3;
}
int triange::gettriange(){
    double d1=sqrt(pow(top1.getX()-top2.getX(),2)+pow(top1.getY()-top2.getY(),2));
    double d2=sqrt(pow(top1.getX()-top3.getX(),2)+pow(top1.getY()-top3.getY(),2));
    double d3=sqrt(pow(top3.getX()-top2.getX(),2)+pow(top3.getY()-top2.getY(),2));
    if(d1+d2<=d3 || d1+d3<=d2 || d2+d3<=d1)
        return 0;
    else if(pow(d1,2)+pow(d2,2)==pow(d3,2) || pow(d3,2)+pow(d2,2)==pow(d1,2) || pow(d1,2)+pow(d3,2)==pow(d2,2))
        return 1;
    else if(d1==d2 && d2==d3)
        return 2;
    else if(d1==d2 || d3==d1 || d2==d3)
        return 3;
    else 
        return 4;
}
void triange::gettriange1(){
    if(gettriange()==1)
        cout<<"tam giac vuong."<<endl;
    else if(gettriange()==2)
        cout<<"tam giac deu."<<endl;
    else if(gettriange()==3)
        cout<<"tam giac can."<<endl;
    else
        cout<<"tam giac thuong."<<endl;
}
double triange::getS(){
    double d1=sqrt(pow(top1.getX()-top2.getX(),2)+pow(top1.getY()-top2.getY(),2));
    double d2=sqrt(pow(top1.getX()-top3.getX(),2)+pow(top1.getY()-top3.getY(),2));
    double d3=sqrt(pow(top3.getX()-top2.getX(),2)+pow(top3.getY()-top2.getY(),2));
    double p=getC()/2;
    return sqrt(p*(p-d1)*(p-d2)*(p-d3));
}
double triange::getC(){
    double d1=sqrt(pow(top1.getX()-top2.getX(),2)+pow(top1.getY()-top2.getY(),2));
    double d2=sqrt(pow(top1.getX()-top3.getX(),2)+pow(top1.getY()-top3.getY(),2));
    double d3=sqrt(pow(top3.getX()-top2.getX(),2)+pow(top3.getY()-top2.getY(),2));
    return d1+d2+d3;
}