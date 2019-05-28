#pragma one
#include <iostream>

using namespace std;

class person
{
protected:
    string fullName;
    int year;
    string town;
    string phoneNumber;
    string cccd;
public:
    person(){}
    person(string fullName, int year,string town,string phoneNumber,string cccd){
        this->fullName=fullName;
        this->year=year;
        this->town=town;
        this->phoneNumber=phoneNumber;
        this->cccd=cccd;        
    }
};
class employer:public person
{
private:
    int ID;
public:
    employer(){
        count1++;
        this->ID=count1;
    }
    employer(string fullName, int year,string town,string phoneNumber,string cccd){
        count1++;
        this->ID=count1;
        this->fullName=fullName;
        this->year=year;
        this->town=town;
        this->phoneNumber=phoneNumber;
        this->cccd=cccd; 
    }
    int getID(){
        return this->ID;
    }
    static int count1;
};
int employer::count1=0;
class customer:public person 
{
private:
    int ID;
    int bonus;
public:
    customer(){
        count2++;
        this->ID=count2;
    }
    customer(string fullName, int year,string town,string phoneNumber,string cccd){
        count2++;
        this->ID=count2;
        this->fullName=fullName;
        this->year=year;
        this->town=town;
        this->phoneNumber=phoneNumber;
        this->cccd=cccd; 
    }
    int getID(){
        return this->ID;
    }
    static int count2;
};
int customer::count2=0;
class product
{
private:
    int ID;
    string name;
    int quantity;
    int price;
public:
    product(){
        sum++;
        this->ID=sum;
    }
    product(string name,int quantity,int price){
        sum++;
        this->ID=sum;
        this->name=name;
        this->quantity=quantity;
        this->price=price;
        
    }
    int getID(){
        return this->ID;
    }
    static int sum;
};
int product::sum=0;
class maket
{
private:
    double chietkhau;
    int tax;
public:
    maket(){}
    maket(double chietkhau,int tax){
        this->chietkhau=chietkhau;
        this->tax=tax;
    }
};
class order
{
public:
    void print(){
        cout<<"                            Don Gia :)))"<<endl;
        cout<<"Ngay mua"<<endl;
    }
    //10 diem anh nhe :))
};