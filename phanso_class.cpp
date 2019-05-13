#include <bits/stdc++.h>

using namespace std;

class phanso
{
private:
	int tu,mau;
public:
	phanso(int t,int m)
	{
		this->tu=t;
		this->mau=m;
	}
	void sum(const phanso &);
	void minus(const phanso &);
	void mul(const phanso &);
	void div(const phanso &);
	void rutgon();
	void inra();
};
int main()
{
	phanso a(0,1);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		phanso b(1,i);
		a.sum(b);
		a.rutgon();
	}
	a.inra();
}
void phanso::sum(const phanso &a)
{
	tu=tu*a.mau+mau*a.tu;
	mau=mau*a.mau;
}
void phanso::minus(const phanso &a)
{
	tu=tu*a.mau-mau*a.tu;
	mau=mau*a.mau;
}
void phanso::mul(const phanso &a)
{
	tu=tu*a.tu;
	mau=mau*a.mau;
}
void phanso::div(const phanso &a)
{
	tu=tu*a.mau;
	mau=mau*a.tu;
}
void phanso::rutgon()
{
	int a=__gcd(tu,mau);
	tu=tu/a;
	mau=mau/a;
}
void phanso::inra()
{
	cout<<tu<<"/"<<mau<<endl;
}
