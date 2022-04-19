#include <bits/stdc++.h>
using namespace std;
class HANG
{
private:
    char ma[10];
    char ten[30];
    char tinhTrang[10];
    int sol;
    int gia;
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
};
class NCC
{
private:
    char ma[10];
    char ten[30];
    char diaChi[50];
    char dt[15];
public:
    void Nhap();
    void Xuat();
};
class PHIEU
{
private:
    char ma[10];
    NCC ncc;
    HANG *hang;
    int n;
public:
    void Nhap();
    void Xuat();
};
void HANG::Nhap()
{
    cout<<"nhap ma sp: "; fflush(stdin); gets(ma);
    cout<<"nhap ten sp: "; fflush(stdin); gets(ten);
    cout<<"nhap tinh trang: "; fflush(stdin); gets(tinhTrang);
    cout<<"nhap so luong: "; cin>>sol;
    cout<<"nhap don gia: "; cin>>gia;
}
void HANG::Xuat()
{
    cout<<left<<setw(15)<<ma<<setw(30)<<ten<<setw(15)<<tinhTrang<<setw(15)<<gia<<setw(15)<<sol<<setw(15)<<gia*sol<<endl;
}
void NCC::Nhap()
{
    cout<<"nhap ma ncc: "; fflush(stdin); gets(ma);
    cout<<"nhap ten ncc: "; fflush(stdin); gets(ten);
    cout<<"nhap dia chi ncc: "; fflush(stdin); gets(diaChi);
    cout<<"nhap std ncc: "; fflush(stdin); gets(dt);
}
void NCC::Xuat()
{
    cout<<"\tma ncc : "<<left<<setw(30)<<ma<<"ten ncc: "<<ten<<endl;
    cout<<"\tdia chi: "<<left<<setw(30)<<diaChi<<"std ncc : "<<dt<<endl;
}
void PHIEU::Nhap()
{
    cout<<"nhap ma phieu: "; fflush(stdin); gets(ma);
    cout<<"nhap thong tin nha cung cap: "<<endl;
    ncc.Nhap();
    cout<<"nhap so luong hang: "; cin>>n;
    hang= new HANG [n];
    for (int i=0; i<n; i++)
    {
        cout<<"nhap thong tin hang thu "<<i+1<<endl;
        hang[i].Nhap();
    }
}
void PHIEU::Xuat()
{
    cout<<"\tTruong Dai hoc Cong Nghiep Ha Noi"<<endl;
    cout<<"\t\t\t\tPHIEU NHAP THIET BI MAY TINH"<<endl;
    cout<<"\tma phieu :"<<ma<<endl;
    ncc.Xuat();
    cout<<left<<setw(15)<<"ma sp"<<setw(30)<<"ten sp"<<setw(15)<<"tinh trang"<<setw(15)<<"gia"<<setw(15)<<"so luong"<<setw(15)<<"thanh tien"<<endl;
    int s=0;
    for (int i=0; i<n; i++)
    {
        s+=hang[i].gia*hang[i].sol;
        hang[i].Xuat();
    }
    cout<<"\ttong so sp: "<<left<<setw(60)<<n;
    cout<<"tong tien: "<<s;
}
int main()
{
    PHIEU phieu;
    phieu.Nhap();
    phieu.Xuat();
    return 0;
}
