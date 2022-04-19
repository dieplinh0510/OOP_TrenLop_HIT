#include <bits/stdc++.h>
using namespace std;

class SoPhuc
{
    double a;
    double b;
public:
    SoPhuc();
    SoPhuc(double x, double y);
    SoPhuc operator+(SoPhuc y);
    SoPhuc operator-(SoPhuc y);
    friend ostream& operator<<(ostream& x, SoPhuc y);
};

SoPhuc::SoPhuc()
{
    a=0;
    b=0;
}

SoPhuc::SoPhuc(double x, double y)
{
    a=x;
    b=y;
}

ostream& operator<<(ostream& x, SoPhuc y)
{
    x<<y.a<<" +i"<<y.b;
    return x;
}

SoPhuc SoPhuc::operator+(SoPhuc y)
{
    SoPhuc temp;
    temp.a= a+ y.a;
    temp.b= b+ y.b;
    return temp;
}

SoPhuc SoPhuc::operator-(SoPhuc y)
{
    SoPhuc temp;
    temp.a= a- y.a;
    temp.b= b- y.b;
    return temp;
}

int main()
{
    SoPhuc sp1(3, 5);
    SoPhuc sp2(4, 4);

    SoPhuc sp3 = sp1 + sp2;
    SoPhuc sp4 = sp1 - sp2;

    ofstream f("SoPhuc.txt", ios::out);
    f<<"SoPhuc 1: "<<sp1<<endl;
    f<<"SoPhuc 2: "<<sp2<<endl;
    f<<"SoPhuc 1+ SoPhuc 2: "<<sp3<<endl;
    f<<"SoPhuc 1- SoPhuc 2: "<<sp4<<endl;
    f.close();

    return 0;
}

