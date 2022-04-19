#include <bits/stdc++.h>

using namespace std;
class PhanSo
{
    double TuSo,MauSo;
public:
    PhanSo operator+(PhanSo y);
    PhanSo operator-(PhanSo y);
    PhanSo operator*(PhanSo y);
    PhanSo operator/(PhanSo y);
    double operator-();
    friend istream& operator>>(istream& x, PhanSo& y);
    friend ostream& operator<<(ostream& x, PhanSo y);
};

PhanSo PhanSo::operator+(PhanSo y)
{
    PhanSo z;
    z.TuSo = TuSo*y.MauSo + MauSo*y.TuSo;
    z.MauSo = MauSo*y.MauSo;
    return z;
}

PhanSo PhanSo::operator-(PhanSo y)
{
    PhanSo z;
    z.TuSo = TuSo*y.MauSo - MauSo*y.TuSo;
    z.MauSo = MauSo*y.MauSo;
    return z;
}

PhanSo PhanSo::operator*(PhanSo y)
{
    PhanSo z;
    z.TuSo = TuSo*y.TuSo;
    z.MauSo = MauSo*y.MauSo;
    return z;
}

PhanSo PhanSo::operator/(PhanSo y)
{
    PhanSo z;
    z.TuSo = TuSo*y.MauSo;
    z.MauSo = MauSo*y.TuSo;
    return z;
}

double PhanSo::operator-()
{
    return TuSo/MauSo;
}

istream& operator>>(istream& x, PhanSo& y)
{
    cout<<"Tu so: "; x>>y.TuSo;
    cout<<"Mau so: "; x>>y.MauSo;
    return x;
}

ostream& operator<<(ostream& x, PhanSo y)
{
    x<<y.TuSo<<"/"<<y.MauSo;
    return x;
}
int main()
{
    PhanSo a,b;
    cout<<"Nhap a: ";
    cin>> a;
    cout<<"Nhap b: ";
    cin>> b;
    PhanSo Tong = a+b;
    PhanSo Hieu = a-b;
    PhanSo Tich = a*b;
    PhanSo Thuong = a/b;
    ofstream f("PhanSo.txt", ios::app);
    f<<a<<"+"<<b<<"="<<Tong<<"="<<-Tong<<endl;
    f<<a<<"-"<<b<<"="<<Hieu<<"="<<-Hieu<<endl;
    f<<a<<"*"<<b<<"="<<Tich<<"="<<-Tich<<endl;
    f<<a<<":"<<b<<"="<<Thuong<<"="<<-Thuong<<endl;
    f.close();

    ifstream f1("PhanSo.txt", ios::in);
    char s[100];
    while(!f1.eof()){
        f1.getline(s, 200);
        cout<<s<<endl;
    }
    f1.close();
    return 0;

}

