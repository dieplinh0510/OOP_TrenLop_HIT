#include <bits/stdc++.h>
using namespace std;
class DATE
{
private:
    int d, m, y;
public:
    void Nhap();
    void Xuat();
};

class NSX
{
private:
    char tenNSX[20];
    char diaChi[20];
public:
    void Nhap();
    void Xuat();
};

class HANG
{
protected:
    char tenHang[20];
    NSX x;
    float donGia;
public:
    void Nhap();
    void Xuat();
    HANG();
};
HANG::HANG()
{

    strcpy(this ->tenHang, " ");
    strcpy(this - >x.tenNSX,  " ");
    strcpy(this->x.diaChi, " ");
    this ->donGia = 0;
}
class TIVI: protected HANG
{
private:
    float kichThuoc;
    DATE ngayNhap;
public:
    void Nhap();
    void Xuat();
    TIVI();
};
TIVI::TIVI() : HANG()
{
    this ->kichThuoc = 0;
    this->ngayNhap.d = 0;
    this->ngayNhap.m = 0;
    this ->ngayNhap.y = 0;
}
void DATE::Nhap()
{
    cout<<"Nhap ngay: "; cin>>d;
    cout<<"Nhap thang: "; cin>>m;
    cout<<"Nhap nam: "; cin>>y;
}
void DATE::Xuat()
{
    cout<<setw(20)<<d<<"/"<<m<<"/"<<y;
}
void NSX::Nhap()
{
    cout<<"Nhap ten NSX: "; fflush(stdin); gets(tenNSX);
    cout<<"Nhap dia chi: "; fflush(stdin); gets(diaChi);
}
void NSX::Xuat()
{
    cout<<setw(20)<<tenNSX<<setw(20)<<diaChi;
}

void HANG::Nhap()
{
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    x.Nhap();
    cout<<"Nhap don gia: "; cin>>donGia;
}
void HANG::Xuat()
{
    cout<<setw(20)<<tenHang<<setw(20);
    x.Xuat();
    cout<<setw(20)<<donGia;
}
void TIVI::Nhap()
{
    HANG::Nhap();
    cout<<"Nhap kich thuoc: "; cin>>kichThuoc;
    ngayNhap.Nhap();
}
void TIVI::Xuat()
{
    HANG::Xuat();
    cout<<setw(20)<<kichThuoc;
    ngayNhap.Xuat();
}
int main()
{
    TIVI tivi;
    tivi.Nhap();
    cout<<setw(20)<<"ten hang"<<setw(20)<<"ten NSV"<<setw(20)<<"dia chi"<<setw(20)<<"don gia"<<setw(20)<<"kich thuoc"<<setw(20)<<"ngay lap"<<endl;
    tivi.Xuat();
    return 0;
}
