#pragma once
#include "nhavien.h"
class NhanVienBC: public NhanVien
{
private:
	double fixed_salary;
public:
	NhanVienBC();
	NhanVienBC(string, string, string, double salary);
	//setters
	void setFixedsalary(double );
	//getters
	double getFixedsalary()const;
	double getSalary()const;
	
};