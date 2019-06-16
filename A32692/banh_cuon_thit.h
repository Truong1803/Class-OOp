#pragma once
#include "banh_cuon.h"
class Banh_cuon_thit:public Banh_cuon
{
protected:
    int Gia_thit;
    int KhoiLuong_thit;
public:
    Banh_cuon_thit(){}
    Banh_cuon_thit(int,int,int,int);
    int getGia_thit()const;
    int getKhoiLuong_thit()const;
    int price()const;
};
Banh_cuon_thit::Banh_cuon_thit(int KhoiLuong,int Gia,int Gia_thit,int KhoiLuong_thit){
    this->Gia=Gia;
    this->KhoiLuong=KhoiLuong;
    this->Gia_thit=Gia_thit;
    this->KhoiLuong_thit=KhoiLuong_thit;
}
int Banh_cuon_thit::price()const{
    return this->Gia*this->KhoiLuong + this->Gia_thit*this->KhoiLuong_thit;
}
int Banh_cuon_thit::getGia_thit()const{
    return this->Gia_thit;
}
int Banh_cuon_thit::getKhoiLuong_thit()const{
    return this->KhoiLuong_thit;
}