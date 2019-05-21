#pragma once
#include "nhanvienHH.h"
class NhanVienHHDB: public NhanVienHH
{
private:
	double base_salary;
public:
	NhanVienHHDB();
	NhanVienHHDB(string, string, string,double, double, double);
	//setter;
    void setBS(double);
	//getter;
    double getBS()const;
	//methods
	double getSalary()const;
	
	
};