#include <iostream>
#include "sach.h"
using namespace std;

int main()
{
    book *a;
    bookIT b("tin",2000,1.5,12000);
    bookKT c("kinhte",2000,1.5,12000,1000);
    a=&c;
    a=&b;
    b.print();
    c.print();
    return 0;
}