#include <bits/stdc++.h>
using namespace std;
class PHIEU;
class NHANVIEN
{
private:
    char ten[30];
    char chucVu[30];
    char phong[30];
    char maPhong[10];
    char truongPhong[30];
public:
    void Nhap();
    void Xuat();
};

class HANG
{
private:
    char ten[30];
    int soL;
    char tinhTrang[30];
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
    friend void REPAIR(PHIEU phieu);
    friend void SORT(PHIEU phieu);
};

class PHIEU
{
    char ma[10];
    char ngay[20];
    NHANVIEN nv;
    HANG *hang;
    int n;
public:
    void Nhap();
    void Xuat();
    friend void REPAIR(PHIEU phieu);
    friend void SORT(PHIEU phieu);
};

void NHANVIEN::Nhap()
{
    cout<<"Nhap ten nhan vien: "; fflush(stdin); gets(ten);
    cout<<"Nhap chuc vu nhan vien: "; fflush(stdin); gets(chucVu);
    cout<<"Nhap phong nhan vien: "; fflush(stdin); gets(phong);
    cout<<"Nhap ma phong nhan vien: "; fflush(stdin); gets(maPhong);
    cout<<"Nhap truong phong nhan vien: "; fflush(stdin); gets(truongPhong);
}
void NHANVIEN::Xuat()
{
    cout<<"Nhan vien kiem ke: "<<ten<<setw(30)<<"Chuc vu: "<<chucVu<<endl;
    cout<<"Kiem ke tai phong: "<<phong<<setw(30)<<"Ma phong: "<<maPhong<<endl;
    cout<<"Truong phong: "<<truongPhong<<endl;
}

void HANG::Nhap()
{
    cout<<"Nhap ten tai san: "; fflush(stdin); gets(ten);
    cout<<"Nhap so luong :  "; cin>>soL;
    cout<<"Nhap tinh trang: "; fflush(stdin); gets(tinhTrang);
}
void HANG::Xuat()
{
    cout<<left<<setw(30)<<ten<<setw(30)<<soL<<setw(30)<<tinhTrang<<endl;
}

void PHIEU::Nhap()
{
    cout<<"Nhap ma phieu: "; fflush(stdin); gets(ma);
    cout<<"Nhap ngay kiem ke: "; fflush(stdin); gets(ngay);
    nv.Nhap();
    cout<<"Nhap so loai tai san: "; cin>>n;
    hang = new HANG [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap tai san thu "<<i+1<<" : "<<endl;
        hang[i].Nhap();
    }
}
void PHIEU::Xuat()
{
    int sum=0;
    cout<<setw(30)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<"Ma phieu: "<<ma<<setw(40)<<"Ngay kiem ke: "<<ngay<<endl;
    nv.Xuat();
    cout<<left<<setw(30)<<"Ten tai san"<<setw(30)<<"So luong"<<setw(30)<<"Tinh trang"<<endl;
    for (int i=0; i<n; i++)
    {
        sum+=hang[i].soL;
        hang[i].Xuat();
    }
    cout<<"So tai san da kiem ke: "<<setw(30)<<n<<"To so luong:"<<sum<<endl;

}

void REPAIR(PHIEU phieu)
{
    for (int i=0; i<phieu.n; i++)
    {
        if (strcmp(phieu.hang[i].ten, "May vi tinh")==0)
        {
            phieu.hang[i].soL=20;
        }
    }
}

void SORT(PHIEU phieu)
{
    for (int i=0; i<phieu.n; i++)
    {
        for (int j=i+1; j<phieu.n; j++)
        {
            if (phieu.hang[i].soL>phieu.hang[j].soL)
            {
                HANG temp = phieu.hang[i];
                phieu.hang[i] = phieu.hang[j];
                phieu.hang[j]=temp;
            }
        }
    }
}
int main()
{
    PHIEU phieu;
    phieu.Nhap();
    phieu.Xuat();

    REPAIR(phieu);
    cout<<endl;
    phieu.Xuat();
    cout<<endl;
    SORT(phieu);
    phieu.Xuat();
    return 0;
}
