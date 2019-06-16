#pragma once
#include <iostream>
#include "banh_cuon.h"
#include "banh_cuon_chay.h"
#include "banh_cuon_dac_biet.h"
#include "banh_cuon_thit.h"
#include "banh_cuon_mong.h"
using namespace std;
class Don_hang
{
private:
    Banh_cuon_chay chay;
    Banh_cuon_mong mong;
    Banh_cuon_thit thit;
    Banh_cuon_dac_biet dacbiet;
public:
    Don_hang(){}
    Don_hang(Banh_cuon_chay ,Banh_cuon_mong ,Banh_cuon_thit ,Banh_cuon_dac_biet );
    void order()const;
    int tienlai()const;
};
Don_hang::Don_hang(Banh_cuon_chay a,Banh_cuon_mong b,Banh_cuon_thit c,Banh_cuon_dac_biet d){
    this->chay=a;
    this->mong=b;
    this->thit=c;
    this->dacbiet=d;    
}
void Don_hang::order()const{
    cout<<"Loai\t\t\t\t"<<"So Luong\t"<<"Gia"<<endl;
    cout<<"1.Banh cuon chay\t\t"<<chay.getKhoiLuong_chay()<<"\t\t"<<chay.price()<<endl;
    cout<<"2.Banh cuon mong\t\t"<<mong.getKhoiLuong_mong()<<"\t\t"<<mong.price()<<endl;
    cout<<"3.Banh cuon thit\t\t"<<thit.getKhoiLuong_thit()<<"\t\t"<<thit.price()<<endl;
    cout<<"4.Banh cuon dac biet\t\t"<<dacbiet.getKhoiLuong_Thit1()<<"\t\t"<<dacbiet.price()<<endl;
    cout<<"Tong thanh toan: "<<chay.price()+mong.price()+thit.price()+dacbiet.price()<<endl;
}
int Don_hang::tienlai()const{
    return chay.price()+mong.price()+thit.price()+dacbiet.price();
}