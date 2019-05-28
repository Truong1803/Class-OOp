#pragma one
#include <iostream>
using namespace std;
class book
{
protected:
    string name;
    int year;
    double heso;
public:
    book();
    book(string, int, double);
    void setname(string);
    void setyear(int);
    void setheso(double);
    string getName()const;
    int getYear()const;
    double getHeso()const;
    virtual void print()=0;
    virtual int price()=0;
};
book::book(){}
book::book(string name,int year,double heso){
    this->name=name;
    this->year=year;
    this->heso=heso;
}
void book::setname(string name){
    this->name;
}
void book::setyear(int year){
    this->year=year;
}
void book::setheso(double heso){
    this->heso=heso;
}
string book::getName()const{
    return this->name;
}
int book::getYear()const{
    return this->year;
}
double book::getHeso()const{
    return this->heso;  
}
class bookIT:public book
{
protected:
    int gianhap;
public:
    bookIT(){}
    bookIT(string,int ,double,int);
    void setGianhap(int);
    int getGianhap()const;
    int price();
    void print();
};
bookIT::bookIT(string name,int year,double heso,int gianhap){
    this->name=name;
    this->year=year;
    this->heso=heso;
    this->gianhap=gianhap;
}
void bookIT::setGianhap(int a){
    this->gianhap=a;
}
int bookIT::getGianhap()const{
    return this->gianhap;
}
int bookIT::price(){
    return this->gianhap*this->heso;
}
void bookIT::print(){
    cout<<"Ten sach: "<<this->name<<endl;
    cout<<"Nam xuat ban: "<<this->year<<endl;
    cout<<"Gia thanh: "<<price()<<endl;
}
class bookKT:public book
{
private:
    int gianhap;
    double chietkhau;
public:
    bookKT(){}
    bookKT(string ,int ,double ,int ,double );
    void setGianhap(int);
    void setchietkhau(double);
    int getGianhap()const;
    double getChietkhau()const;
    int price();
    void print();
};
bookKT::bookKT(string name,int year,double heso,int gianhap,double chietkhau){
    this->name=name;
    this->year=year;
    this->heso=heso;
    this->gianhap=gianhap;
    this->chietkhau=chietkhau;
}
void bookKT::setGianhap(int a){
    this->gianhap=a;
}
int bookKT::getGianhap()const{
    return this->gianhap;
}
void bookKT::setchietkhau(double b){
    this->chietkhau=b;
}
double bookKT::getChietkhau()const{
    return this->chietkhau;
}
int bookKT::price(){
    return this->gianhap*this->heso-this->chietkhau;
}
void bookKT::print(){
    cout<<"Ten sach: "<<this->name<<endl;
    cout<<"Nam xuat ban: "<<this->year<<endl;
    cout<<"Gia thanh: "<<price()<<endl;
}
