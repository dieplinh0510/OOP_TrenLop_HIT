#include <bits/stdc++.h>
using namespace std;
class SINHVIEN
{
private:
    char maSV[15];
    char tenSV[30];
    int tuoi;
public:
    void nhap();
    void xuat();
};

class LOPHOC
{
private:
    char maLH[15];
    int phong;
    SINHVIEN *x;
    int n;
public:
    void nhap();
    void xuat();
};

void SINHVIEN::nhap()
{
    cout<<"nhap ma sv: "; fflush(stdin); gets(maSV);
    cout<<"nhap ten sv: "; fflush(stdin); gets(tenSV);
    cout<<"nhap tuoi sv: "; cin>>tuoi;
}

void SINHVIEN::xuat()
{
    cout<<left<<setw(30)<<maSV<<setw(30)<<tenSV<<setw(30)<<tuoi<<endl;
}

void LOPHOC::nhap()
{
    cout<<"nhap ma LH: "; fflush(stdin); gets(maLH);
    cout<<"nhap phong : "; cin>>phong;
    cout<<"nhap so sinh vien: "; cin>>n;
    x= new SINHVIEN [n];
    for (int i=0; i<n; i++)
    {
        x[i].nhap();
    }
}
void LOPHOC::xuat()
{
    cout<<"ma LH: "<<maLH<<endl;
    cout<<"phong: "<<phong<<endl;
    cout<<left<<setw(30)<<"ma SV"<<setw(30)<<"ten SV"<<setw(30)<<"tuoi"<<endl;
    for (int i=0; i<n; i++)
    {
        x[i].xuat();
    }
}
int main()
{
    LOPHOC a;
    a.nhap();
    a.xuat();
    return 0;
}


2163
