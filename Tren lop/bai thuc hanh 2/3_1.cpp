#include <bits/stdc++.h>
using namespace std;
class DATE
{
private:
    int d, m, y;
public:
    void nhap();
    void xuat();
};

class NHANSU
{
private:
    char ma[15];
    char hoTen[30];
    DATE ns;
public:
    void Nhap();
    void Xuat();
};
void DATE::nhap()
{
    cout<<"nhap ngay : "; cin>>d;
    cout<<"nhap thang: "; cin>>m;
    cout<<"nhap nam: "; cin>>y;
}

void DATE::xuat()
{
    cout<<d<<"/"<<m<<"/"<<y;
}

void NHANSU::Nhap()
{
    cout<<"nhap ma nhan su: "; fflush(stdin); gets(ma);
    cout<<"ho ten nhan su: "; fflush(stdin); gets(hoTen);
    ns.nhap();
}

void NHANSU::Xuat()
{
    cout<<endl<<"ma nhan su: "<<ma<<endl;
    cout<<"ten nhan su: "<<hoTen<<endl;
    cout<<"ngay thang nam: ";
    ns.xuat();
}
int main()
{
    NHANSU nhansu;
    nhansu.Nhap();
    nhansu.Xuat();
    return 0;
}
