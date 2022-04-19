#include <bits/stdc++.h>
using namespace std;
class HANG
{
private:
    char maHang[15];
    char tenHang[30];
    float donGia;
public:
    void Nhap();
    void Xuat();
};

class PHIEU
{
private:
    char maPhieu[15];
    HANG *x;
    int n;
public:
    void Nhap();
    void Xuat();
};

void HANG::Nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    cout<<"Nhap don gia: "; cin>>donGia;
}
void HANG::Xuat()
{
    cout<<left<<setw(30)<<maHang<<setw(30)<<tenHang<<setw(30)<<donGia<<endl;
}

void PHIEU::Nhap()
{
    cout<<"Nhap ma phieu: ";fflush(stdin); gets(maPhieu);
    cout<<"Nhap so luong hang: "; cin>>n;
    x = new HANG [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap thong tin hang thu "<<i+1<<"  : "<<endl;
        x[i].Nhap();
    }
}
void PHIEU::Xuat()
{
    cout<<"Ma phieu: "<<maPhieu<<endl;
    cout<<left<<setw(30)<<"Ma Hang"<<setw(30)<<"Ten hang"<<setw(30)<<"Don Gia"<<endl;

    for (int i=0; i<n; i++)
        x[i].Xuat();

}

int main()
{
    PHIEU phieus;
    phieus.Nhap();
    phieus.Xuat();
    return 0;
}
