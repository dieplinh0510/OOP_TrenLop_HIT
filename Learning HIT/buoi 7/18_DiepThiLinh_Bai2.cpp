#include <bits/stdc++.h>
using namespace std;
class TT
{
private:
    float a, b, c;
public:
    TT operator-();
    TT operator+(TT x);
    TT operator-(TT y);
    friend istream &operator >> (istream &is, TT &tt );
    friend ostream &operator << (ostream &os, TT &tt);
};

istream &operator >> (istream &is, TT &tt )
{
    is>>tt.a;
    is>>tt.b;
    is>>tt.c;
    return is;
}

ostream &operator << (ostream &os, TT &tt)
{
    os<<"y ="<<tt.a<<"x2 + "<<tt.b<<"x + "<<tt.c<<endl;
    return os;
}

TT TT::operator-()
{
    TT x;
    x.a= -a;
    x.b= -b;
    x.c= -c;
    return x;
}

TT TT::operator+(TT x)
{
    TT f;
    f.a=this->a+x.a;
    f.b=this->b+x.b;
    f.c=this->c+x.c;
    return f;
}

TT TT::operator-(TT y)
{
    TT e;
    e.a=this->a-y.a;
    e.b=this->b-y.b;
    e.c=this->c-y.c;
    return e;
}
int main()
{
    TT y1, y2;
    cout<<"Nhap phuong trinh y1: "; cin>>y1;
    cout<<"Nhap phuong trinh y2: "; cin>>y2;
    y1=- y1;
    y2=- y2;
    cout<<"Phuong trinh y1 da dao: "<<y1<<endl;
    cout<<"Phuong trinh y2 da dao: "<<y2<<endl;
    TT tong=y1+y2;
    TT hieu=y1-y2;
    cout<<"tong: "<<tong<<endl;
    cout<<"hieu: "<<hieu<<endl;
    return 0;
}
