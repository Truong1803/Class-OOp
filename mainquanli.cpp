#include <iostream>
#include "quanly.h"
using namespace std;
int main()
{
    customer a("Trinh Van Truong",2000,"Ha Nam","0366662673","035200003550");
    customer b("Trinh Van Truong",2000,"Ha Noi","0366662674","035200003551");
    employer c("Nghe Quyet Tien",2000,"Ha Nam","03xxxxxxxx","0352xxxxxxxxx");
    employer d("Ngo Trung Son",2000,"Ba Vi","03xxxxxxxxx","0352xxxxxxxxx");
    employer e("Ngo Trung Son",2000,"Ba Vi","03xxxxxxxxx","0352xxxxxxxxx");
    employer s;
    cout<<a.getID()<<endl;
    cout<<b.getID()<<endl;
    cout<<c.getID()<<endl;
    cout<<d.getID()<<endl;
    cout<<e.getID()<<endl;
    cout<<s.getID()<<endl;
}