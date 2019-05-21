#include "nhanvienHHDB.h"


NhanVienHHDB::NhanVienHHDB(){}
NhanVienHHDB::NhanVienHHDB(string id,string fullname,string taxcode,double tongdoanhthu,double mucthuong,double base_salary){
    this->id=id;
    this->fullname=fullname;
    this->taxcode=taxcode;
    this->tongdoanhthu=tongdoanhthu;
    this->mucthuong=mucthuong;
    this->base_salary=base_salary;
}
void NhanVienHHDB::setBS(double bs){
    this->base_salary=bs;
}
double NhanVienHHDB::getBS()const{
    return this->base_salary;
}
double NhanVienHHDB::getSalary()const{
	return this->tongdoanhthu * (this->mucthuong / 100.0) + (this -> base_salary *0.1);
}
