#include <iostream>
#include "nhanvien.cpp"
#include "nhanvienHHDB.cpp"
#include "nhanvienHH.cpp"
int main()
{
    NhanVienHHDB b("123","trinh van truong ","123",10000,500,100);
    cout<<b.getSalary()<<endl;
    return 0;
}