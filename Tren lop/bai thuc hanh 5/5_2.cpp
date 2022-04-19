#include <bits/stdc++.h>
using namespace std;
class SINHVIEN
{
private:
    char maSV[10];
    char tenSV[20];
    char lop[10];
    int khoa;
public:
    void Nhap();
    void Xuat();
};
class BANGDIEM
{
private:
    char tenMon[30];
    int soTrinh;
    float diem;
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
};
class PHIEU
{
private:
    SINHVIEN sv;
    BANGDIEM *bd;
    int n;
public:
    void Nhap();
    void Xuat();
};
void SINHVIEN::Nhap()
{
    cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(maSV);
    cout<<"Nhap ten sinh vien: "; fflush(stdin); gets(tenSV);
    cout<<"Nhap lop: "; fflush(stdin); gets(lop);
    cout<<"Nhap khoa: "; cin>>khoa;
}
void SINHVIEN::Xuat()
{
    cout<<"Ma sinh vien:"<<setw(30)<<maSV<<"Ten sinh vien: "<<tenSV<<endl;
    cout<<"Lop: "<<setw(30)<<lop<<"Khoa: "<<khoa<<endl;

}
void BANGDIEM::Nhap()
{
    cout<<"Nhap ten mon: "; fflush(stdin); gets(tenMon);
    cout<<"Nhap so trinh: "; cin>>soTrinh;
    cout<<"Nhap diem: "; cin>>diem;
}
void BANGDIEM::Xuat()
{
    cout<<left<<setw(30)<<tenMon<<setw(30)<<soTrinh<<setw(30)<<diem<<endl;
}
void PHIEU::Nhap()
{
    sv.Nhap();
    cout<<"Nhap so mon: "; cin>>n;
    bd = new BANGDIEM [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap mon thu "<<i+1<<" : "<<endl;
        bd[i].Nhap();
    }

}
void PHIEU::Xuat()
{
    int sum=0; float tb=0;
    cout<<right<<setw(40)<<"PHIEU BAO DIEM"<<endl;
    sv.Xuat();
    cout<<"Bang diem: "<<endl;
    cout<<left<<setw(30)<<"Ten mon"<<setw(30)<<"So trinh"<<setw(30)<<"Diem"<<endl;
    for (int i=0; i<n; i++)
    {
        sum+=bd[i].soTrinh;
        tb+=bd[i].soTrinh*bd[i].diem;
        bd[i].Xuat();
    }
    cout<<"Diem trung binh : "<<setw(40)<<tb/sum;

}
int main()
{
    PHIEU phieu;
    phieu.Nhap();
    phieu.Xuat();
    return 0;
}
