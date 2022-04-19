#include <bits/stdc++.h>
using namespace std;
class Date
{
private:
    int d, m, y;
public:
    void nhap();
    void xuat();
    friend class NhanSu;
};
class NhanSu
{
private:
    int ma;
    static int c;
    char hoten[30];
    Date ns;
public:
    void nhap();
    void xuat();
    NhanSu();
};
int NhanSu::ma=0;
NhanSu::NhanSu()
{
    NhanSu::c++;
    this->ma=NhanSu::c;
    strcpy(this->hoten, "");
}
void Date::nhap()
{
    cout<<"nhap ngay: "; cin>>d;
    cout<<"nhap thang: "; cin>>m;
    cout<<"nhap nam: "; cin>>y;
}
void Date::xuat()
{
    cout<<d<<"/"<<m<<"/"<<y<endl;

}
void NhanSu::nhap()
{
    cout<<"nhap ma: "; cin>>ma;
    fflush(stdin);
    cout<<"nhap ho ten: "; gets(hoten);
    ns.nhap();
}
void NhanSu::xuat()
{
    cout<<"ma "<<left<<setw(30)<<"ho ten"<<left<<setw(30)<<"nam sinh"<<endl;
    cout<<ma<<left<<setw(30)<<hoten<<left<<setw(30)<<ns.xuat<<endl;
}

int main()
{
    int n;
    cout<<"nhap n: "; cin>>n;
    NhanSu *a= new NhanSu [n];
    for (int i=0; i<n; i++)
    {
        cout<<"nhap thong tin nhan su thu: "<<i+1<<endl;
        a.nhap();
    }
    for (int i=0; i<n; i++)
    {
        cout<<"thong tin nhan su thu: "<<i+1<<endl;
        a.xuat();
    }
}
