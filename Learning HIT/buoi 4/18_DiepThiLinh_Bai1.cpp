#include <bits/stdc++.h>
using namespace std;
class Date
{
private:
    int d, m, y;
public:
    void Nhap();
    void Xuat();
};
class NhanSu
{
private:
    int ma;
    static int c;
    char hoten[30];
    Date ns;
public:
    void Nhap();
    void Xuat();
    NhanSu();
};
int NhanSu::c=0;
NhanSu::NhanSu()
{
    NhanSu::c++;
    this->ma=NhanSu::c;
    strcpy(this->hoten, "");
}
void Date::Nhap()
{
    cout<<"nhap ngay: "; cin>>d;
    cout<<"nhap thang: "; cin>>m;
    cout<<"nhap nam: "; cin>>y;
}
void Date::Xuat()
{
    cout<<d<<"/"<<m<<"/"<<y<<endl;
}
void NhanSu::Nhap()
{
    fflush(stdin);
    cout<<"nhap ho ten: "; gets(hoten);
    ns.Nhap();
}
void NhanSu::Xuat()
{
    cout<<left<<setw(15)<<ma<<setw(30)<<hoten;
    ns.Xuat();
}

int main()
{
    int n;
    cout<<"nhap n: "; cin>>n;
    NhanSu *a= new NhanSu [n];
    for (int i=0; i<n; i++)
    {
        cout<<"nhap thong tin nhan su thu: "<<i+1<<endl;
        a[i].Nhap();
    }
    cout<<left<<setw(15)<<"ma "<<setw(30)<<"ho ten"<<setw(30)<<"nam sinh"<<endl;
    for (int i=0; i<n; i++)
    {
        a[i].Xuat();
    }
}
