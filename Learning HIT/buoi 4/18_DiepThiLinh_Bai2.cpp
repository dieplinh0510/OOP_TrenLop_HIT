#include <bits/stdc++.h>
using namespace std;
class HANG
{
private:
    char ten[30];
    float gia;
    int sol;
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
public:
    void Nhap();
    void Xuat();
};
class PHIEU
{
private:
    char ma[10];
    char ngay[10];
    NCC ncc;
    HANG *hang;
    int n;
public:
    void Nhap();
    void Xuat();
};
void HANG::Nhap()
{
    cout<<"nhap ten hang: "; fflush(stdin); gets(ten);
    cout<<"nhap gia: "; cin>>gia;
    cout<<"nhap so luong : "; cin>>sol;
}
void HANG::Xuat()
{
    cout<<left<<setw(30)<<ten<<setw(15)<<gia<<setw(15)<<sol<<setw(15)<<gia*sol<<endl;
}
void NCC::Nhap()
{
    cout<<"nhap ma ncc: "; fflush(stdin); gets(ma);
    cout<<"nhap ten ncc: "; fflush(stdin); gets(ten);
    cout<<"nhap dia chi: "; fflush(stdin); gets(diaChi);
}
void NCC::Xuat()
{
    cout<<"\tma ncc : "<<left<<setw(30)<<ma<<"ten ncc: "<<ten<<endl;
    cout<<"\tdia chi: "<<diaChi<<endl;
}
void PHIEU::Nhap()
{
    cout<<"nhap ma phieu: "; fflush(stdin); gets(ma);
    cout<<"nhap ngay lap: "; fflush(stdin); gets(ngay);
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
    cout<<"\t\t\t\tPHIEU NHAP HANG"<<endl;
    cout<<"\tma phieu :"<<left<<setw(30)<<ma<<"ngay lap: "<<ngay<<endl;
    ncc.Xuat();
    cout<<left<<setw(30)<<"ten hang"<<setw(15)<<"don gia"<<setw(15)<<"so luong"<<setw(15)<<"thanh tien"<<endl;
    int s=0;
    for (int i=0; i<n; i++)
    {
        s+=hang[i].gia*hang[i].sol;
        hang[i].Xuat();
    }

    cout<<left<<setw(60)<<"tong tien: "<<s;
}
int main()
{
    PHIEU phieu;
    phieu.Nhap();
    phieu.Xuat();
    return 0;
}

