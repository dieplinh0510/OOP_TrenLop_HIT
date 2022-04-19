#include <bits/stdc++.h>
using namespace std;
class NCC
{
private:
    char maNCC[10];
    char tenNCC[10];
    char diaChi[30];
public:
    void Nhap();
    void Xuat();
};

class HANG
{
private:
    char tenHang[10];
    float donGia;
    int soLuong;
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
};

class PHIEU
{
private:
    char ma[10];
    char ngayLap[20];
    NCC x;
    HANG *y;
    int n;
public:
    void Nhap();
    void Xuat();
};

void NCC::Nhap()
{
    cout<<"Nhap ma NCC: "; fflush(stdin); gets(maNCC);
    cout<<"Nhap ten NCC: "; fflush(stdin); gets(tenNCC);
    cout<<"Nhap dia chi NCC: "; fflush(stdin); gets(diaChi);
}
void NCC::Xuat()
{
    cout<<"Ma NCC: "<<maNCC;
    cout<<"Ten NCC: "<<tenNCC;
    cout<<"Dia chi NCC: "<<diaChi;
}

void HANG::Nhap()
{
    cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
    cout<<"Nhap don gia: "; cin>>donGia;
    cout<<"Nhap so luong: "; cin>>soLuong;
}
void HANG::Xuat()
{
    cout<<left<<setw(30)<<tenHang<<setw(30)<<donGia<<setw(30)<<soLuong<<setw(30)<<donGia*soLuong<<endl;
}

void PHIEU::Nhap()
{
    cout<<"Nhap ma phieu: "; fflush(stdin); gets(ma);
    cout<<"Nhap ngay lap: "; fflush(stdin); gets(ngayLap);
    x.Nhap();
    cout<<"Nhap so hang: "; cin>>n;
    y = new HANG [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap thong tin hang thu "<<i+1<<" : "<<endl;
        y[i].Nhap();
    }
}
void PHIEU::Xuat()
{
    cout<<"Ma phieu: "<<ma<<left<<setw(40)<<"Ngay lap: "<<ngayLap<<endl;
    x.Xuat();
    cout<<left<<setw(30)<<"ten hang"<<setw(30)<<"Don gia"<<setw(30)<<"So luong"<<setw(30)<<"Thanh tien"<<endl;
    float sum=0;
    for (int i=0; i<n; i++){
        sum+=y[i].donGia*y[i].soLuong;
        y[i].Xuat();
    }
    cout<<"Tong tien: "<<sum;
}
int main()
{
    PHIEU ph;
    ph.Nhap();
    ph.Xuat();
    return 0;
}
