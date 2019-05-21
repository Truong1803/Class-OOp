#pragma once
#include "nhavien.h"
class NhanVienHH:public NhanVien
{
protected:
	double tongdoanhthu;
	double mucthuong;//10%
public:
	NhanVienHH();
	NhanVienHH(string, string, string, double,double);
	//setters
    void setDT(double);
    void setMT(double);
	//getters
    double getDT()const;
    double getMT()const;

	//method
	double getSalary()const;
	
};