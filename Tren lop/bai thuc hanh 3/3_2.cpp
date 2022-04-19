#include <bits/stdc++.h>
using namespace std;
class NSX
{
private:
    char maNsx[15];
    char tenNsx[30];
    char dcNsx[30];
public:
    void Nhap();
    void Xuat();
};

class HANG
{
private:
    char maHang[15];
    char tenHang[30];
    NSX x;
public:
    void Nhap();
    void Xuat();
};

void NSX::Nhap()
{
    cout<<"Nhap ma NSX: "; fflush(stdin); gets(maNsx);
    cout<<"Nhap ten NSX: "; fflush(stdin); gets(tenNsx);
    cout<<"Nhap dia chi NSX: "; fflush(stdin); gets(dcNsx);
}
void NSX::Xuat()
{
    cout<<"Ma NSX: "<<maNsx<<endl;
    cout<<"Ten NSX: "<<tenNsx<<endl;
    cout<<"Dia chi NSX: "<<dcNsx<<endl;
}

void HANG::Nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    x.Nhap();
}
void HANG::Xuat()
{
    cout<<"Ma hang: "<<maHang<<endl;
    cout<<"Ten hang: "<<tenHang<<endl;
    x.Xuat();
}
int main()
{
    HANG hangs;
    hangs.Nhap();
    cout<<endl;
    hangs.Xuat();
    return 0;
}
