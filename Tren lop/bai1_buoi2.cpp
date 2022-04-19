#include <bits/stdc++.h>
using namespace std;
class GIAMDOC
{
private:
    char hoTen[30];
    int tuoi;
    char sdt[15];
public:
    void nhap();
    void xuat();
};

class CONGTY
{
private:
    char tenCT[50];
    char diaChi[50];
    GIAMDOC x;
public:
    void nhap();
    void xuat();
};

void GIAMDOC::nhap()
{
    cout<<"nhap ho ten GD: "; fflush(stdin); gets(hoTen);
    cout<<"nhap tuoi GD: "; cin>>tuoi;
    cout<<"nhap sdt GD: "; fflush(stdin); gets(sdt);

}

void GIAMDOC::xuat()
{
    cout<<"ho ten GD: "<<hoTen<<endl;
    cout<<"tuoi GD: "<<tuoi<<endl;
    cout<<"sdt GD: "<<sdt<<endl;
}

void CONGTY::nhap()
{
    cout<<"nhap ten CT: "; fflush(stdin); gets(tenCT);
    cout<<"nhap dia chi CT: "; fflush(stdin); gets(diaChi);
    x.nhap();
}

void CONGTY::xuat()
{
    cout<<"ten CT: "<<tenCT<<endl;
    cout<<"dia chi CT: "<<diaChi<<endl;
    x.xuat();
}
int main()
{
    CONGTY congty;
    congty.nhap();
    cout<<endl<<"Xuat thong tin: "<<endl;
    congty.xuat();
}
