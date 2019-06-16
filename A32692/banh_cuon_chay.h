#pragma once
#include "banh_cuon.h"
class Banh_cuon_chay:public Banh_cuon
{
private:
    int Gia_chay;
    int KhoiLuong_chay;
public:
    Banh_cuon_chay(){}
    Banh_cuon_chay(int,int,int,int);
    int getGia_chay()const;
    int getKhoiLuong_chay()const;
    int price()const;
};
Banh_cuon_chay::Banh_cuon_chay(int KhoiLuong,int Gia,int KhoiLuong_chay,int Gia_chay){
    this->KhoiLuong=KhoiLuong;
    this->Gia=Gia;
    this->KhoiLuong_chay=KhoiLuong_chay;
    this->Gia_chay=Gia_chay;
}
int Banh_cuon_chay::price()const{
    return this->Gia*this->KhoiLuong+this->Gia_chay*this->KhoiLuong_chay;
}
int Banh_cuon_chay::getGia_chay()const{
    return this->Gia_chay;
}
int Banh_cuon_chay::getKhoiLuong_chay()const{
    return this->KhoiLuong_chay;
}