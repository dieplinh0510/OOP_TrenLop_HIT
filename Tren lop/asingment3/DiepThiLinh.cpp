#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
    double ts, ms;
public:
    PhanSo();
    PhanSo(double a, double b);
    PhanSo operator*(PhanSo y);
    double operator-();
    friend istream& operator>>(istream &x, PhanSo& y);
    friend ostream& operator<<(ostream &x, PhanSo y);
};
PhanSo::PhanSo()
{
    ts = 0;
    ms = 1;
}
PhanSo::PhanSo(double a, double b)
{
    ts=a;
    ms=b;
}
double PhanSo::operator-()
{
    return ts/ms;
}
PhanSo PhanSo::operator*(PhanSo y)
{
    PhanSo z;
    z.ts = ts*y.ts;
    z.ms = ms*y.ms;
    return z;
}

istream &operator>>(istream &x, PhanSo& y)
{
    cout<<"tu so: "; x>>y.ts;
    cout<<"mau so: "; x>>y.ms;
    return x;
}
ostream &operator<<(ostream &x, PhanSo y)
{
    x<<y.ts<<"/"<<y.ms;
    return x;
}

int main()
{
    PhanSo a; cout<<"nhap phan so a: "; cin>>a;
    PhanSo b; cout<<"nhap phan so b: "; cin>>b;
    PhanSo c= a*b;
    ofstream f("PHANSO.txt",ios::out);
    f<<a<<"*"<<b<<"="<<c;
    f.close();
    ifstream f1("PhanSo.txt", ios::in);
    char s[200];
    while(!f1.eof()){
        f1.getline(s, 200);
        cout<<s<<endl;
    }
    f1.close();
    return 0;
}
