#pragma once
#include "cua_hang.h"
#include <iostream>
using namespace std;
class Giang_cuon
{
private:
    static int count;
    Cua_hang Cuahang[100];
public:
    Giang_cuon(){}
    Giang_cuon(Cua_hang );
    void them_cua_hang(Cua_hang);
    void in_ra_cua_hang();
    int tongdoanhthu();
};
Giang_cuon::Giang_cuon(Cua_hang cuahang){
    this->Cuahang[0]=cuahang;
    count++;
}
void Giang_cuon::them_cua_hang(Cua_hang cuahang){
    this->Cuahang[count]=cuahang;
    count++;
}
void Giang_cuon::in_ra_cua_hang(){
    for(int i=0;i<count;i++){
        cout<<Cuahang[i].getName()<<endl;
    }
}
int Giang_cuon::tongdoanhthu(){
    int k=0;
    for(int i=0;i<count;i++){
        k=k+Cuahang[i].tienlai();
    }
    return k;
}
int Giang_cuon::count=0;
