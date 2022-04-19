#include <bits/stdc++.h>
using namespace std;
class SOPHUC
{
private:
    int a,b;
public:
    void Nhap();
    void Xuat();
    SOPHUC operator+(SOPHUC x);
    SOPHUC operator-(SOPHUC x);
    friend istream &operator >>(istream &is, SOPHUC &sp);
    friend ostream &operator << (ostream &os, SOPHUC sp);
};


istream &operator >>(istream &is, SOPHUC &sp)
{
    is>>sp.a;
    is>>sp.b;
    return is;
}

ostream &operator << (ostream &os, SOPHUC sp)
{
    os << sp.a<<" + i*"<<sp.b;
    return os;
}

SOPHUC SOPHUC ::operator+(SOPHUC x){
	SOPHUC c;
	c.a=this->a + x.a;
	c.b=this->b + x.b;
	return c;
}

SOPHUC SOPHUC ::operator-(SOPHUC x){
	SOPHUC d;
	d.a=this->a - x.a;
	d.b=this->b - x.b;
	return d;
}
int main()
{
    SOPHUC sp1, sp2;
    cout<<"Nhap so phuc 1: "; cin>>sp1;
    cout<<"Nhap so phuc 2: "; cin>>sp2;
    SOPHUC sp3=sp1+sp2;
    SOPHUC sp4=sp1-sp2;
    cout<<sp1<<" + "<<sp2<<" = "<<sp3<<endl;
    cout<<sp1<<" - "<<sp2<<" = "<<sp3<<endl;
    return 0;
}
