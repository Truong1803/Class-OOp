#pragma once
#include <iostream>
#include "don_hang.h"
using namespace std;
class Cua_hang
{
private:
    string name;
    Don_hang don_hang;
public:
    Cua_hang(){}
    Cua_hang(string,Don_hang);
    string getName(){
        return this->name;
    }
    int tienlai()const;
};
Cua_hang::Cua_hang(string name,Don_hang don_hang){
    this->name=name;
    this->don_hang=don_hang;

}
int Cua_hang::tienlai()const{
    return don_hang.tienlai()/10;
}
