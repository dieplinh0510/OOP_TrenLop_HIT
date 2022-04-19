#include <bits/stdc++.h>
using namespace std;
class TIVI;
class NSX
{
private:
    char ten[30];
    char diaChi[30];
public:
    void nhap();
    void xuat();
};

class HANG
{
protected:
    char ten[30];
    NSX x;
    int donGia;
public:
    void nhap();
    void xuat();
    HANG();
    friend void REPAIR(TIVI *tivi, int n);
};

class DATE
{
private:
    int ngay, thang, nam;
public:
    void nhap();
    void xuat();
};

class TIVI: public HANG
{
private:
    int kichThuoc;
    DATE ngayNhap;
public:
    void nhap();
    void xuat();
    TIVI();
    friend void REPAIR(TIVI *tivi, int n);
};

HANG::HANG()
{
    strcpy(this->ten, "");
    this->donGia=0;
}

TIVI::TIVI()
{
    this->kichThuoc=0;
}

void NSX::nhap()
{
    cout<<"nhap ten nsx: "; fflush(stdin); gets(ten);
    cout<<"nhap dia chi: "; fflush(stdin); gets(diaChi);
}

void NSX::xuat()
{
    cout<<"ten nsx: "<<ten<<endl;
    cout<<"dia chi: "<<diaChi<<endl;
}

void DATE::nhap()
{
    cout<<"nhap ngay: "; cin>>ngay;
    cout<<"nhap thang: "; cin>>thang;
    cout<<"nhap nam: "; cin>>nam;
}

void DATE::xuat()
{
    cout<<"ngay "<<ngay<<" thang "<<thang<<" nam "<<nam<<endl;
}

void TIVI::nhap()
{
    HANG::nhap();
    cout<<"nhap kich thuoc: "; cin>>kichThuoc;
    ngayNhap.nhap();
}

void TIVI::xuat()
{
    HANG::xuat();
    cout<<"kich thuoc: "<<kichThuoc<<endl;
    ngayNhap.xuat();
}

void HANG::nhap()
{
    cout<<"nhap ten hang: "; fflush(stdin); gets(ten);
    x.nhap();
    cout<<"nhap don gia: "; cin>>donGia;
}

void HANG::xuat()
{
    cout<<"ten hang: "<<ten<<endl;
    x.xuat();
    cout<<"don gia: "<<donGia<<endl;
}
void REPAIR(TIVI *tivi, int n)
{
    for (int i=0; i<n; i++)
    {
        tivi.donGia[i]=tivi.donGia[i]+1000;
    }
}
int main()
{
    int n; cin>>n;
    TIVI *tivi = new TIVI [n];
    tivi.nhap();
    tivi.xuat();

    REPAIR(tivi, n);
    tivi.xuat();
    return 0;
}
