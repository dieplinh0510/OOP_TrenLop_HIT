#include <bits/stdc++.h>
using namespace std;
class PHONGMAY;
class QUANLY
{
private:
    char maQl[10];
    char hoTen[30];
public:
    void Nhap();
    void Xuat();
};

class MAY
{
private:
    char maMay[20];
    char kieuMay[20];
    char tinhTrang[20];
public:
    void Nhap();
    void Xuat();
    friend void Repair(PHONGMAY phongmays);
    friend void RepairS(PHONGMAY phongmays);
};

class PHONGMAY
{
private:
    char maPhong[10];
    char tenPhong[20];
    float dienTich;
    QUANLY x;
    MAY *y;
    int n;
public:
    void Nhap();
    void Xuat();
    friend void Repair(PHONGMAY phongmays);
    friend void RepairS(PHONGMAY phongmays);
};

void QUANLY::Nhap()
{
    cout<<"Nhap ma quan ly: "; fflush(stdin); gets(maQl);
    cout<<"Nhap ho ten quan ly: "; fflush(stdin); gets(hoTen);
}
void QUANLY::Xuat()
{
    cout<<"Ma quan ly: "<<maQl<<endl;
    cout<<"Ho ten quan ly: "<<hoTen<<endl;
}

void MAY::Nhap()
{
    cout<<"Nhap ma may: "; fflush(stdin); gets(maMay);
    cout<<"Nhap kieu may: "; fflush(stdin); gets(kieuMay);
    cout<<"Nhap tinh trang may: "; fflush(stdin); gets(tinhTrang);
}
void MAY::Xuat()
{
    cout<<left<<setw(30)<<maMay<<setw(30)<<kieuMay<<setw(30)<<tinhTrang<<endl;
}

void PHONGMAY::Nhap()
{
    cout<<"Nhap ma phong: "; fflush(stdin); gets(maPhong);
    cout<<"Nhap ten phong: "; fflush(stdin); gets(tenPhong);
    cout<<"Nhap dien tich phong: "; cin>>dienTich;
    x.Nhap();
    cout<<"Nhap so may: "; cin>>n;
    y= new MAY [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap thong tin may thu "<<i+1<<" : "<<endl;
        y[i].Nhap();
    }
}
void PHONGMAY::Xuat()
{
    cout<<"Ma phong: "<<maPhong<<endl;
    cout<<"Ten phong: "<<tenPhong<<endl;
    cout<<"Dien tich phong: "<<dienTich<<endl;
    x.Xuat();
    cout<<left<<setw(30)<<"Ma may"<<setw(30)<<"Kieu may"<<setw(30)<<"Tinh trang"<<endl;
    for (int i=0; i<n; i++)
    {
        y[i].Xuat();
    }
}

void Repair(PHONGMAY phongmays)
{
    for (int i=0; i<phongmays.n; i++)
    {
        if (strcmp(phongmays.y[i].maMay, "MS001") == 1)
        {
            //phongmays.y[i].tinhTrang = "Tot";
            strcpy(phongmays.y[i].tinhTrang, "Tot");
        }
    }
}

void RepairS(PHONGMAY phongmays)
{
        phongmays.dienTich = 50;
}
int main()
{
    PHONGMAY phongmays;
    phongmays.Nhap();
    phongmays.Xuat();
    Repair(phongmays);
    phongmays.Xuat();

    return 0;
}
