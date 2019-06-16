#pragma once 
class Banh_cuon
{
protected:
    int KhoiLuong;
    int Gia;
public:
    Banh_cuon(){}
    Banh_cuon(int,int);
    int getGia()const;
    int getKhoiLuong()const;
    int gia_vo()const;
    virtual int price()const = 0;
};
Banh_cuon::Banh_cuon(int KhoiLuong,int Gia){
    this->KhoiLuong=KhoiLuong;
    this->Gia=Gia;
}
int Banh_cuon::gia_vo()const{
    return this->Gia*this->KhoiLuong;
}
int Banh_cuon::getKhoiLuong()const{
    return this->Gia;
}
int Banh_cuon::getGia()const{
    return this->KhoiLuong;
}