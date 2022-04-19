#include <bits/stdc++.h>
using namespace std;
class PHIEU;
class TS
{
private:
    char ten[30];
    int soL;
    char tinhTrang[30];
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
    friend void repair(PHIEU phieu);
    friend void Insert(PHIEU *phieu, TS x, int pos);
    friend void Sort(PHIEU phieu);
};

class NV
{
private:
    char ten[30];
    char chucVu[30];
    char phong[50];
    char ma[10];
    char truongPhong[30];
public:
    void Nhap();
    void Xuat();
};


class PHIEU
{
private:
    char ma[10];
    char ngay[15];
    NV nv;
    TS *ts;
    int n;
public:
    void Nhap();
    void Xuat();
    friend void repair(PHIEU phieu);
    friend void Insert(PHIEU phieu, TS x, int pos);
    friend void Sort(PHIEU phieu);
};

void PHIEU::Nhap()
{
    cout<<"nhap ma phieu: "; fflush(stdin); gets(ma);
    cout<<"nhap ngay kiem ke: "; fflush(stdin); gets(ngay);
    nv.Nhap();
    cout<<"Nhap so tai san da kiem ke: "; cin>>n;
    ts= new TS [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap tai san thu :"<<i+1<<endl;
        ts[i].Nhap();
    }
}

void PHIEU::Xuat()
{
    cout<<left<<setw(30)<<"PHIEU KIEM KE TAI SAN"<<endl;
    cout<<left<<setw(15)<<"Ma phieu: "<<setw(15)<<ma<<setw(19)<<"Ngay kiem ke: "<<setw(15)<<ngay<<endl;
    nv.Xuat();
    cout<<left<<setw(30)<<"Ten tai san"<<setw(30)<<"So luong"<<setw(30)<<"Tinh trang"<<endl;
    int s=0;
    for  (int i=0; i<n; i++)
    {
        ts[i].Xuat();
        s+=ts[i].soL;

    }
    cout<<left<<setw(15)<<"Tong so tai san da kiem ke: "<<setw(15)<<n<<setw(15)<<"Tong so luong : "<<s;
}
void NV::Nhap()
{
    cout<<"nhap ten nhan vien: "; fflush(stdin); gets(ten);
    cout<<"nhap chuc vu: "; fflush(stdin); gets(chucVu);
    cout<<"nhap phong: "; fflush(stdin); gets(phong);
    cout<<"nhap ma phong: "; fflush(stdin); gets(ma);
    cout<<"nhap ten truong phong: "; fflush(stdin); gets(truongPhong);

}
void NV::Xuat()
{
    cout<<left<<setw(15)<<"Nhan vien kiem ke: "<<setw(15)<<ten<<setw(15)<<"Chuc vu: "<<setw(15)<<chucVu<<endl;
    cout<<left<<setw(15)<<"Kiem ke tai phong: "<<setw(15)<<phong<<setw(15)<<"Ma phng: "<<setw(15)<<ma<<endl;
    cout<<left<<setw(15)<<"Truong phong: "<<truongPhong<<endl;
}
void TS::Nhap()
{
    cout<<"Nhap teen tai san: "; fflush(stdin); gets(ten);
    cout<<"Nhap so luong : "; cin>>soL;
    cout<<"Nhap tinh trang : "; fflush(stdin); gets(tinhTrang);
}
void TS::Xuat()
{
    cout<<left<<setw(30)<<ten<<setw(30)<<soL<<setw(30)<<tinhTrang<<endl;
}

void repair(PHIEU phieu)
{
    for (int i=0; i<phieu.n; i++)
    {
        if (phieu.ts[i].ten=="May vi tinh")
        {
            phieu.ts[i].soL=20;
        }
    }
}

void Insert(PHIEU phieu, TS x, int pos)
{
   // phieu=(PHIEU*)realloc(phieu, (phieu.n+1)*sizeof(PHIEU));
   phieu.ts=(TS*)realloc(phieu.ts, (phieu.n+1)*sizeof(TS));
    for (int i=phieu.n; i>=pos; i--)
    {
        phieu.ts[i]=phieu.ts[i-1];
    }
    phieu.n++;
    phieu.ts[pos-1]=x;
}

void Sort(PHIEU phieu)
{
    for (int i=0; i<phieu.n-1; i++)
    {
        for (int j=i+1; j<phieu.n; j++)
        {
            if (phieu.ts[i].soL>phieu.ts[j].soL)
            {
                TS temp=phieu.ts[i];
                phieu.ts[i]=phieu.ts[j];
                phieu.ts[j]=temp;
            }
        }
    }
}
int main()
{
    PHIEU phieu;
    phieu.Nhap();
    phieu.Xuat();

    cout<<endl<<"phieu sau khi sua: "<<endl;
    phieu.Xuat();

    cout<<endl<<"Nhap tai san can them: "<<endl;
    TS x;
    x.Nhap();
    Insert(phieu, x, 2);
    cout<<endl<<"Bang sau khi da them: "<<endl;
    phieu.Xuat();

    cout<<endl<<"Phieu sau khi da sap xep: "<<endl;
    Sort(phieu);
    phieu.Xuat();
    return 0;
}
