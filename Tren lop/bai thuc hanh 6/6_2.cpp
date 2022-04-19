#include <bits/stdc++.h>
using namespace std;
class PRINTER
{
protected:
    float trongLuong;
    char hangSX[20];
    int namSX;
    int tocDo;

};

class DOPRINTER : protected PRINTER
{
private:

    int matDo;
public:
    void Nhap();
    void Xuat();
    friend void Repair1(DOPRINTER &a);
};
class LASERPRINTER: protected PRINTER
{
private:
    int phanGiai;
public:
    void Nhap();
    void Xuat();
    friend void Repair2(LASERPRINTER &b);
};
void DOPRINTER::Nhap()
{
    cout<<"Nhap trong luong: "; cin>>trongLuong;
    cout<<"Nhap hang Sx: "; fflush(stdin); gets(hangSX);
    cout<<"Nhap nam SX: "; cin>>namSX;
    cout<<"Nhap toc do: "; cin>>tocDo;
    cout<<"Nhap mat do kim: "; cin>>matDo;
}
void DOPRINTER::Xuat()
{
    cout<<setw(20)<<trongLuong<<setw(20)<<hangSX<<setw(20)<<namSX<<setw(20)<<tocDo<<setw(20)<<matDo<<endl;
}

void LASERPRINTER::Nhap()
{
    cout<<"Nhap trong luong: "; cin>>trongLuong;
    cout<<"Nhap hang Sx: "; fflush(stdin); gets(hangSX);
    cout<<"Nhap nam SX: "; cin>>namSX;
    cout<<"Nhap toc do: "; cin>>tocDo;
    cout<<"Nhap do phan giai: "; cin>>phanGiai;
}
void LASERPRINTER::Xuat()
{
    cout<<setw(20)<<trongLuong<<setw(20)<<hangSX<<setw(20)<<namSX<<setw(20)<<tocDo<<setw(20)<<phanGiai<<endl;
}

void Repair1(DOPRINTER &a)
{
    a.namSX = 2021;
}
void Repair2(LASERPRINTER &b)
{
    b.namSX = 2021;
}
int main()
{
    DOPRINTER a;
    cout<<"Nhap thong tin may kim: "<<endl;
    a.Nhap();
    LASERPRINTER b;
    cout<<"Nhap thong tin laser: "<<endl;
    b.Nhap();

    cout<<setw(20)<<"Trong luong"<<setw(20)<<"Hang SX"<<setw(20)<<"Nam SX"<<setw(20)<<"Toc do"<<setw(20)<<"Mat do"<<endl;
    a.Xuat();


    cout<<setw(20)<<"Trong luong"<<setw(20)<<"Hang SX"<<setw(20)<<"Nam SX"<<setw(20)<<"Toc do"<<setw(20)<<"Phan giai"<<endl;
    b.Xuat();
    cout<<"Sau khi sua thong tin: "<<endl;
    cout<<setw(20)<<"Trong luong"<<setw(20)<<"Hang SX"<<setw(20)<<"Nam SX"<<setw(20)<<"Toc do"<<setw(20)<<"Mat do"<<endl;
    Repair1(a);
    a.Xuat();
    cout<<setw(20)<<"Trong luong"<<setw(20)<<"Hang SX"<<setw(20)<<"Nam SX"<<setw(20)<<"Toc do"<<setw(20)<<"Phan giai"<<endl;
    Repair2(b);
    b.Xuat();
    return 0;
}
