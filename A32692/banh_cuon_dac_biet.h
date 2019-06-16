#pragma once
#include "banh_cuon_thit.h"
class Banh_cuon_dac_biet:public Banh_cuon_thit
{
private:
    int Gia_thit1;
    int KhoiLuong_thit1;
public:
    Banh_cuon_dac_biet(){};
    Banh_cuon_dac_biet(int,int,int,int,int,int);
    /*int getGia()const;
    int getKhoiLuong()const;*/
    int getGia_Thit1()const;
    int getKhoiLuong_Thit1()const;
    int price()const;
};
Banh_cuon_dac_biet::Banh_cuon_dac_biet(int KhoiLuong,int Gia,int KhoiLuong_thit,int Gia_thit,int Gia_thit1,int KhoiLuong_thit1){
    this->Gia_thit1=Gia_thit1;
    this->KhoiLuong_thit1=KhoiLuong_thit1;
    this->Gia=Gia;
    this->KhoiLuong=KhoiLuong;
    this->Gia_thit=Gia_thit;
    this->KhoiLuong_thit=KhoiLuong_thit1;
}
int Banh_cuon_dac_biet::price()const{
    return this->Gia_thit1*this->KhoiLuong_thit1+this->Gia*this->KhoiLuong+this->KhoiLuong_thit*this->Gia_thit;
}
/*int Banh_cuon_dac_biet::getGia()const{
    return this->Gia;
}
int Banh_cuon_dac_biet::getKhoiLuong()const{
    return this->KhoiLuong;
}*/
int Banh_cuon_dac_biet::getGia_Thit1()const{
    return this->Gia_thit1;
}
int Banh_cuon_dac_biet::getKhoiLuong_Thit1()const{
    return this->KhoiLuong_thit1;
}