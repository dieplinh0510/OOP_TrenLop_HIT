#include <bits/stdc++.h>

using namespace std;
class TamThuc
{
    double a,b,c;
public:
    TamThuc();
    TamThuc(double x, double y, double z);
    TamThuc operator+(TamThuc y);
    TamThuc operator-(TamThuc y);
    TamThuc operator-();
    friend ostream& operator<<(ostream& x, TamThuc y);
};

TamThuc::TamThuc()
{
    a=b=c=0;
}

TamThuc::TamThuc(double x, double y, double z)
{
    a=x;
    b=y;
    c=z;
}

TamThuc TamThuc::operator+(TamThuc y)
{
    TamThuc temp;
    temp.a=a+y.a;
    temp.b=b+y.b;
    temp.c=c+y.c;
    return temp;
}

TamThuc TamThuc::operator-(TamThuc y)
{
    TamThuc temp;
    temp.a=a-y.a;
    temp.b=b-y.b;
    temp.c=c-y.c;
    return temp;
}

TamThuc TamThuc::operator-()
{
    TamThuc temp;
    temp.a=-a;
    temp.b=-b;
    temp.c=-c;
    return temp;
}

ostream& operator<<(ostream& x, TamThuc y)
{
    x<<y.a<<"x"<<(char)253<<" +"<<y.b<<"x"<<" +"<<y.c;
    return x;
}

int main()
{
    TamThuc x(1,2,3), y(1,2,2);
    x = -x;
    y = -y;

    ofstream f("TamThuc.txt", ios::out);
    TamThuc Tong = x + y;
    TamThuc Hieu = x - y;

    f<<"x doi dau: "<<x<<endl;
    f<<"y doi dau: "<<y<<endl;
    f<<"Tong: "<<Tong<<endl;
    f<<"Hieu: "<<Hieu<<endl;
    f.close();
    return 0;
}

