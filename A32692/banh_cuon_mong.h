#pragma once
#include "banh_cuon.h"
class Banh_cuon_mong:public Banh_cuon
{
private:
    int Gia_mong;
    int KhoiLuong_mong;
public:
    Banh_cuon_mong(){}
    Banh_cuon_mong(int,int,int,int);
    int getGia_mong()const;
    int getKhoiLuong_mong()const;
    int price()const;
};
Banh_cuon_mong::Banh_cuon_mong(int KhoiLuong,int Gia,int KhoiLuong_mong,int Gia_mong){
    this->Gia=Gia;
    this->KhoiLuong=KhoiLuong;
    this->Gia_mong=Gia_mong;
    this->KhoiLuong_mong=KhoiLuong_mong;
}
int Banh_cuon_mong::price()const{
    return this->Gia*this->KhoiLuong + this->Gia_mong*this->KhoiLuong_mong;
}
int Banh_cuon_mong::getGia_mong()const{
    return this->Gia_mong;
}
int Banh_cuon_mong::getKhoiLuong_mong()const{
    return this->KhoiLuong_mong;
}