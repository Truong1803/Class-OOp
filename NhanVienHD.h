#pragma once
#include "nhavien.h"
class NhanVienHD : public NhanVien
{
protected:
    double base_time;
    double base_salary;

public:
    NhanVienHD();
    NhanVienHD(string, string, string, double, double);
    void setBT(double);
    void setBS(double);
    double getbase_time() const;
    double getbase_salary() const;
    double getsalary() const;
};