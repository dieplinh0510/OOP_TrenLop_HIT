#include <bits/stdc++.h>
using namespace std;
class CONGTY;
class NGUOI
{
protected:
    char hoTen[30];
    int tuoi;
    char gioiTinh[10];
public:
    void nhap();
    void xuat();
    friend class CONGTY;
    friend void repair(CONGTY congty);
    friend void Sort(CONGTY congty);
};

class NHANVIEN: public NGUOI
{
private:
    char ma[10];
    char chucVu[20];
    int luong;
public:
    void nhap();
    void xuat();
    friend class CONGTY;
    friend void repair(CONGTY congty);
    friend void Sort(CONGTY congty);
};

class CONGTY
{
private:
    char ma[10];
    char diaChi[30];
    NHANVIEN *x;
    int n;
public:
    void nhap();
    void xuat();
    friend void repair(CONGTY congty);
    friend void Sort(CONGTY congty);
};

void NGUOI::nhap()
{
    cout<<"nhap ho ten nguoi: "; fflush(stdin); gets(hoTen);
    cout<<"nhap tuoi nguoi: "; cin>>tuoi;
    cout<<"nhap gioi tinh nguoi: "; fflush(stdin); gets(gioiTinh);
}
void NGUOI::xuat()
{
    cout<<"ho ten nguoi: "<<hoTen<<endl;
    cout<<"tuoi nguoi: "<<tuoi<<endl;
    cout<<"nhap gioi tinh: "<<gioiTinh<<endl;
}

void NHANVIEN::nhap()
{
    NGUOI::nhap();
    cout<<"nhap ma nhan vien: "; fflush(stdin); gets(ma);
    cout<<"nhap chuc vu : "; fflush(stdin); gets(chucVu);
    cout<<"nhap luong: "; cin>>luong;
}
void NHANVIEN::xuat()
{
    NGUOI::xuat();
    cout<<"ma nhan vien: "<<ma<<endl;
    cout<<"chuc vu: "<<chucVu<<endl;
    cout<<"luong: "<<luong<<endl;
}

void CONGTY::nhap()
{
    cout<<"nhap ma cong ty: "; fflush(stdin); gets(ma);
    cout<<"nhap dia chi cong ty: "; fflush(stdin); gets(diaChi);
    cout<<"nhap so nhan vien: "; cin>>n;
    x=new NHANVIEN [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap thong tin nhan vien thu "<<i+1<<endl;
        x[i].nhap();
    }
}
void CONGTY::xuat()
{
    cout<<"ma cong ty: "<<ma<<endl;
    cout<<"dia chi cong ty: "<<diaChi<<endl;
    for (int i=0; i<n; i++)
    {
        x[i].xuat();
        cout<<endl;
    }
}

void repair(CONGTY congty)
{
    for (int i=0; i<congty.n; i++)
    {
        if (congty.x[i].tuoi> 40 && strcmp(congty.x[i].chucVu, "ketoan"))
        {
            congty.x[i].luong=1000;
        }
    }
}

void Sort(CONGTY congty)
{
    for (int i=0; i<congty.n-1; i++)
    {
        for (int j=i+1; j<congty.n; j++)
        {
            if (congty.x[i].luong>congty.x[j].luong)
            {
                NHANVIEN temp=congty.x[i];
                congty.x[i]=congty.x[j];
                congty.x[j]=temp;
            }
        }
    }
}
int main()
{
    CONGTY congty;
    congty.nhap();
    cout<<endl;
    congty.xuat();

    cout<<"thong tin da sua: "<<endl;
    repair(congty);
    congty.xuat();

    cout<<"thong tin da sap xep: "<<endl;
    congty.xuat();
    return 0;
}
