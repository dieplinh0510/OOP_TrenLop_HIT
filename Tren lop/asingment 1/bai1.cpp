#include <bits/stdc++.h>
using namespace std;
class PHIEU;
class NCC
{
private:
    char ma[10];
    char ten[30];
    char diaChi[30];
    char sdt[12];
public:
    void Nhap();
    void Xuat();
};

class SP
{
private:
    char ma[10];
    char ten[20];
    int soL;
    float donGia;
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
    friend void Check(PHIEU phieu);
    friend void Sort(PHIEU phieu);
};

class PHIEU
{
private:
    char ma[10];
    char ngayLap[20];
    NCC x;
    SP *sp;
    int n;
public:
    void Nhap();
    void Xuat();
    friend void Check(PHIEU phieu);
    friend void Sort(PHIEU phieu);
};

void NCC::Nhap()
{
    cout<<"Nhap ma NCC: "; fflush(stdin); gets(ma);
    cout<<"Nhap ten NCC: "; fflush(stdin); gets(ten);
    cout<<"Nhap dia chi NCC: "; fflush(stdin); gets(diaChi);
    cout<<"Nhap sdt NCC: "; fflush(stdin); gets(sdt);
}
void NCC::Xuat()
{
    cout<<right<<setw(30)<<"Ma nha cung cap: "<<ma<<setw(30)<<"Ten nha cung cap: "<<ten<<endl;
    cout<<right<<setw(30)<<"Dia chi: "<<diaChi<<setw(30)<<"SDT: "<<sdt<<endl;

}

void SP::Nhap()
{
    cout<<"Nhap ma sp: "; fflush(stdin); gets(ma);
    cout<<"Nhap ten sp: "; fflush(stdin); gets(ten);
    cout<<"Nhap so luong: "; cin>>soL;
    cout<<"Nhap don gia: "; cin>>donGia;
}
void SP::Xuat()
{
    cout<<setw(15)<<ma<<setw(15)<<ten<<setw(15)<<soL<<setw(15)<<donGia<<setw(15)<<soL*donGia<<endl;
}

void PHIEU::Nhap()
{
    cout<<"Nhap ma phieu: "; fflush(stdin); gets(ma);
    cout<<"Nhap ngay lap: "; fflush(stdin); gets(ngayLap);
    x.Nhap();
    cout<<"Nhap so loai sp: "; cin>>n;

    for (int i=0; i<n; i++)
    {
        cout<<"Nhap san pham thu "<<i+1<<" : "<<endl;
        sp[i].Nhap();
    }
}
void PHIEU::Xuat()
{
    float sum=0;
    cout<<"Dai hoc Victory"<<endl;
    cout<<right<<setw(50)<<"PHIEU NHAP VAN PHONG PHAM"<<endl;
    cout<<right<<setw(30)<<"Ma phieu:"<<ma<<setw(30)<<"Ngay lap: "<<ngayLap<<endl;
    x.Xuat();
    cout<<setw(15)<<"Ma sp"<<setw(15)<<"Ten san pham"<<setw(15)<<"So luong"<<setw(15)<<"Don gia"<<setw(15)<<"Thanh tien"<<endl;
    for (int i=0; i<n; i++)
    {
        sum+=sp[i].soL*sp[i].donGia;
        sp[i].Xuat();
    }
    cout<<left<<setw(50)<<"TONG: "<<sum<<endl;
    cout<<setw(30)<<"Hieu truong"<<setw(30)<<"Phong tai chinh"<<setw(30)<<"Nguoi lap"<<endl;

}

void Check(PHIEU phieu)
{
    int dem=0;
    for (int i=0; i<phieu.n; i++)
    {
        if (phieu.sp[i].soL<80)
        {
            dem++;
        }
    }
    cout<<"Co "<<dem<<" san pham co so luong nho hon 80 trong phieu"<<endl;
}
void Sort(PHIEU phieu)
{
    for (int i=0; i<phieu.n-1; i++)
    {
        for (int j=i+1; j<phieu.n; j++)
        {
            if (phieu.sp[i].soL>phieu.sp[j].soL)
            {
                SP temp = phieu.sp[i];
                phieu.sp[i]=phieu.sp[j];
                phieu.sp[j]=temp;
            }
        }
    }
}
int main()
{
    PHIEU phieu;
    phieu.Nhap();
    phieu.Xuat();
    Check(phieu);
    Sort(phieu);
    phieu.Xuat();
}
