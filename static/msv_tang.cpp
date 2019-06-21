#include <bits/stdc++.h>

using namespace std;

class sinhvien
{
private:
    static int counter;
    int msv;
public:
    sinhvien();
    static int getcounter(){
        return counter;
    }
    void setcounter(int i){
        counter=i;
    }
    friend ostream &operator <<(ostream &out,const sinhvien &a);
}; 
ostream &operator <<(ostream &out,const sinhvien &a)
{
    cout<<"MSV"<<a.msv<<endl;
    return out;
}
int sinhvien::counter=0;
sinhvien::sinhvien(){
    this->msv=counter;
    counter++;
}
int main()
{
    sinhvien A;
    sinhvien B;
    sinhvien C[100];
    for(auto &sv:C){
        cout<<sv<<endl;
    }
}