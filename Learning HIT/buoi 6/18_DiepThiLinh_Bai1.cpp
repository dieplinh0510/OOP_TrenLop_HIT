#include <bits/stdc++.h>
using namespace std;
class VEHICLE
{
protected:
    char nhan[10];
    int nam;
    char hang[10];
public:
    void nhap();
    void xuat();
};

class OTO:public VEHICLE
{
private:
    int choNgoi;
    int dungTich;
public:
    void nhap();
    void xuat();
};

class MOTO:public VEHICLE
{
private:
    int phanKhoi;
public:
    void nhap();
    void xuat();
};

void VEHICLE::nhap()
{
    cout<<"nhap nhan hieu: "; fflush(stdin); gets(nhan);
    cout<<"nhap nam san xuat: "; cin>>nam;
    cout<<"nhap hang : "; fflush(stdin); gets(hang);
}

void VEHICLE::xuat()
{
    cout<<"nhan hieu : "<<nhan<<endl;
    cout<<"nam san xuat: "<<nam<<endl;
    cout<<"hang: "<<hang<<endl;
}

void OTO::nhap()
{
    VEHICLE::nhap();
    cout<<"nhap so cho ngoi: "; cin>>choNgoi;
    cout<<"nhap dung tich: "; cin>>dungTich;
}

void OTO::xuat()
{
    VEHICLE::xuat();
    cout<<"so cho ngoi : "<<choNgoi<<endl;
    cout<<"dung tich : "<<dungTich<<endl;
}

void MOTO::nhap()
{
    VEHICLE::nhap();
    cout<<"nhap phan khoi: "; cin>>phanKhoi;
}

void MOTO::xuat()
{
    VEHICLE::xuat();
    cout<<"phan khoi : "<<phanKhoi<<endl;
}
int main()
{
    OTO oto;

    oto.nhap();
    MOTO moto;
    moto.nhap();
    cout<<"o to"<<endl;
    oto.xuat();
    cout<<"moto"<<endl;
    moto.xuat();
    return 0;
}
