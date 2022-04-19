#include <bits/stdc++.h>
using namespace std;
class NSX
{
private:
    char ma[10];
    char ten[10];
    char diaChi[20];
public:
    friend class HANG;
};

class HANG
{
private:
    char ma[10];
    char ten[10];
    float donGia;
    float trongLuong;
    NSX x;
public:
    void Nhap();
    void Xuat();
};

void HANG::Nhap()
{
    cout<<"ma hang: "; fflush(stdin); gets(ma);
    cout<<"ten hang: "; fflush(stdin); gets(ten);
    cout<<"don gia: "; cin>>donGia;
    cout<<"trong luong: "; cin>>trongLuong;
    cout<<"ma nsx: "; fflush(stdin); gets(x.ma);
    cout<<"ten nsx: "; fflush(stdin); gets(x.ten);
    cout<<"dia chi: "; fflush(stdin); gets(x.diaChi);
}
void HANG::Xuat()
{
    cout<<"ma hang: "<<ma<<endl;
    cout<<"ten hang: "<<ten<<endl;
    cout<<"don gia: "<<donGia<<endl;
    cout<<"trong luong: "<<trongLuong<<endl;
    cout<<"ma nsx: "<<x.ma<<endl;
    cout<<"ten nsx: "<<x.ten<<endl;
    cout<<"dia chi: "<<x.diaChi<<endl;
}
int main()
{
    HANG h;
    h.Nhap();
    h.Xuat();
    return 0;
}
