#include "NhanVienHD.h"
NhanVienHD::NhanVienHD(){}
NhanVienHD::NhanVienHD(string id, string fullname, string taxcode, double base_time, double base_salary){
    this->id=id;
    this->fullname=fullname;
    this->taxcode=taxcode;
    this->base_time=base_time;
    this->base_salary=base_salary;
}
void NhanVienHD::setBT(double base_time){
    this->base_time=base_time;
}
void NhanVienHD::setBS(double base_salary){
    this->base_salary=base_salary;
}
double NhanVienHD::getbase_time() const{
    return base_time;
}
double NhanVienHD::getbase_salary() const{
    return base_salary;
}
double NhanVienHD::getsalary() const{
    return this->base_time * this->base_salary;    
}