#include <bits/stdc++.h>
using namespace std;
class HANG
{
protected:
    char ma[10];
    float donGia;
    int soL;
public:
    void Nhap();
    void Xuat();
};
class MAYMAC : protected HANG
{
private:
    char chatLieu[20];
    char siZe[5];
public:
    void Nhap();
    void Xuat();
};
void HANG::Nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(ma);
    cout<<"Nhap don gia: "; cin>>donGia;
    cout<<"Nhap so luong: "; cin>>soL;
}
void HANG::Xuat()
{
    cout<<"Ma hang: "<<ma<<endl;
    cout<<"Don gia: "<<donGia<<endl;
    cout<<"So luong: "<<soL<<endl;
}
void MAYMAC::Nhap()
{
    HANG::Nhap();
    cout<<"Nhap chat lieu: "; fflush(stdin); gets(chatLieu);
    cout<<"Nhap size: "; fflush(stdin); gets(siZe);
}
void MAYMAC::Xuat()
{
    HANG::Xuat();
    cout<<"Chat lieu: "<<chatLieu<<endl;
    cout<<"size: "<<siZe<<endl;
}
int main()
{
    MAYMAC a;
    a.Nhap();
    a.Xuat();

    return 0;
}
