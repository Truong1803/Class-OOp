#include <iostream>
#include "banh_cuon.h"
#include "banh_cuon_chay.h"
#include "banh_cuon_dac_biet.h"
#include "banh_cuon_thit.h"
#include "banh_cuon_mong.h"
#include "don_hang.h"
#include "cua_hang.h"
#include "giang_cuon.h"
using namespace std;
int main()
{   
    
    Banh_cuon_chay a(100,100,100,100);
    Banh_cuon_mong b(100,100,100,100);
    Banh_cuon_thit c(100,100,100,100);
    Banh_cuon_dac_biet d(100,100,100,100,100,100);
    Don_hang e(a,b,c,d);
    Cua_hang x("cuahang1",e);
    Giang_cuon y(x);
    y.in_ra_cua_hang();
    e.order();
    cout<<"Tien lai "<<x.tienlai()<<endl;
    
}