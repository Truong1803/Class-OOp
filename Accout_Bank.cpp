#include <iostream>
#include <string.h>
using namespace std;
class Accout_Bank
{
    private:

        string stk;
        string name;
        string pass;
        float  money;

    public:
        Accout_Bank();
        void signup(string ,string ,string ,float );
        float getMoney();  
        void Themtien(float a);
        void Ruttien(float a);
        void info();
};
class Bank
{
    private:
        Accout_Bank ACC_BANK[1000];
        int stt;
    public:
        Bank();
        int getStt();
        void signup(Accout_Bank a);
        Accout_Bank Topmoney();
        void MinusMoney();
};
int main()
{
   /* Accout_Bank Truong;
    Truong.signup("123456789","1","truong",100000);
    Truong.Themtien(10000);
    Truong.Ruttien(9999);
    Truong.info();*/
    Bank Human;
    int t;
    cout<<"Nhap so tk muon tao :"<<endl;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Tai khoan :"<<i<<endl;
        string stk,pass,name;
        float money;
        cout<<"Moi ban nhap stk:"<<endl;
        cin>>stk;
        cout<<"Moi ban nhap mat khau:"<<endl;
        cin>>pass;
        cout<<"Moi ban nhap ten day du:"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"Moi ban nhap so tien muon gui:"<<endl;
        cin>>money;
        Accout_Bank Human1;
        Human1.signup(stk,pass,name,money);
        Human.signup(Human1);
    }
    cout<<"Tai khoan co so du lon nhat:" <<endl;
    Human.Topmoney().info();
    cout<<"Cac tai khoan co so du am: "<<endl;
    Human.MinusMoney();


}
Accout_Bank::Accout_Bank(){}
void Accout_Bank::signup(string stk ,string pass ,string name,float money)
{
    this ->stk=stk;
    this ->pass=pass;
    this ->name=name;
    this ->money=money;
}
void Accout_Bank::Themtien(float a)
{
        this ->money+=a;
}
void Accout_Bank::Ruttien(float a)
{
        this->money-=a;
}
void Accout_Bank::info()
{
    cout<<"so tai khoan "<<this->stk<<endl;
    cout<<"ten khach hang "<<this->name<<endl;
    cout<<"so du "<<this->money<<endl;
}
float Accout_Bank::getMoney()
{
    return this ->money;
}
Bank::Bank()
{
    stt=0;
}
int Bank::getStt()
{
    return this->stt;
}
void Bank::signup(Accout_Bank a)
{
    ACC_BANK[stt]=a;
    stt++;
}
Accout_Bank Bank::Topmoney()
{
    int min=0,s=0;
    for(int i=0;i<stt;i++)
    {
        if(ACC_BANK[i].getMoney()>min)
        {
            min=ACC_BANK[i].getMoney();
            s=i;
        }
    }
    return ACC_BANK[s];
}
void Bank::MinusMoney()
{
    int s=1;
    for(int i=0;i<stt;i++)
    {
        if(ACC_BANK[i].getMoney()<0)
        {
            cout<<"Tai khoan "<<s<<" :"<<endl;
            ACC_BANK[i].info();
            s++;
        }
    }
    if(s==1)
        cout<<"Khong co tai khoan nao bi am tien."<<endl;
}