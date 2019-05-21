#include "NhanVienHH.h"


NhanVienHH::NhanVienHH()
{
}

NhanVienHH::NhanVienHH(string id, string fullname, string taxcode, double tongdoanhthu,double mucthuong){
    this->id=id;
    this->fullname=fullname;
    this->taxcode=taxcode;
    this->tongdoanhthu=tongdoanhthu;
    this->mucthuong=mucthuong;
}
	//setters
void NhanVienHH::setDT(double tongdoanhthu){
    this->tongdoanhthu=tongdoanhthu;
}

void NhanVienHH::setMT(double mucthuong){
    this->mucthuong=mucthuong;
}
	//getters
double NhanVienHH::getDT()const{
    return this->tongdoanhthu;
}
double NhanVienHH::getMT()const{
    return this->mucthuong;
}
	//method
double NhanVienHH::getSalary()const
{	
	return this->tongdoanhthu * this->mucthuong / 100.0;
}
