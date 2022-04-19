#include <bits/stdc++.h>
using namespace std;
class VEHICLE
{
protected:
    char nhanHieu[20];
    int namSX;
    char hang[20];
public:
    void Nhap();
    void Xuat();
};
class OTO : protected VEHICLE
{
private:
    int choNgoi;
    float dungTich;
public:
    void Nhap();
    void Xuat();
    friend void Repair(OTO &oto);
};
class MOTO : protected VEHICLE
{
private:
    int phanKhoi;
public:
    void Nhap();
    void Xuat();
};

void VEHICLE::Nhap()
{
    cout<<"Nhap nhan hieu: "; fflush(stdin); gets(nhanHieu);
    cout<<"Nhap nam SX: "; cin>>namSX;
    cout<<"Nhap hang: "; fflush(stdin); gets(hang);
}
void VEHICLE::Xuat()
{
    cout<<setw(20)<<nhanHieu<<setw(20)<<namSX<<setw(20)<<hang;
}
void OTO::Nhap()
{
    VEHICLE::Nhap();
    cout<<"Nhap so cho ngoi: "; cin>>choNgoi;
    cout<<"Nhap dung tich: "; cin>>dungTich;
}
void OTO::Xuat()
{
    VEHICLE::Xuat();
    cout<<setw(20)<<choNgoi<<setw(20)<<dungTich<<endl;
}
void MOTO::Nhap()
{
    VEHICLE::Nhap();
    cout<<"Nhap phan khoi: "; cin>>phanKhoi;
}
void MOTO::Xuat()
{
    VEHICLE::Xuat();
    cout<<setw(20)<<phanKhoi<<endl;
}

void Repair(OTO &oto)
{
    oto.dungTich = 3.1;
}
int main()
{
    OTO oto;
    cout<<"Nhap thong tin o to: "<<endl;
    oto.Nhap();
    cout<<setw(20)<<"Nhan hieu"<<setw(20)<<"Nam sx"<<setw(20)<<"Hang"<<setw(20)<<"Cho ngoi"<<setw(20)<<"Dung tich"<<endl;
    oto.Xuat();

    MOTO moto;
    cout<<"Nhap thong tin moto: "<<endl;
    moto.Nhap();
    cout<<setw(20)<<"Nhan hieu"<<setw(20)<<"Nam sx"<<setw(20)<<"Hang"<<setw(20)<<"Phan khoi"<<endl;
    moto.Xuat();

    cout<<"Sau khi sua: "<<endl;
    cout<<setw(20)<<"Nhan hieu"<<setw(20)<<"Nam sx"<<setw(20)<<"Hang"<<setw(20)<<"Cho ngoi"<<setw(20)<<"Dung tich"<<endl;
    Repair(oto);
    oto.Xuat();
    return 0;
}
