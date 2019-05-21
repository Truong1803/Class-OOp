#include "nhanvienBC.h"
NhanVienBC::NhanVienBC(string id, string fullname, string taxcode, double salary){
    this->id=id;
    this->fullname=fullname;
    this->taxcode=taxcode;
}
	//setters
void NhanVienBC::setFixedsalary(double salary){
    this->fixed_salary=salary;
}
	//getters
double NhanVienBC::getFixedsalary()const{
        return this->fixed_salary;
    }
double NhanVienBC::getSalary()const
{
		return this->fixed_salary;
}