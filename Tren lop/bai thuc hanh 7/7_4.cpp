#include <bits/stdc++.h>
using namespace std;
class NGUOI
{
protected:
    char hoten[20];
    int tuoi;
public:
    void nhap();
    void xuat();
};

class BENHVIEN
{
private:
    char ten[20];
    char diaChi[30];
    NGUOI giamdoc;
public:
    friend class NGUOI;
    friend class BENHNHAN;
};

class BENHNHAN : public NGUOI
{
private:
    char ma[20];
    char tienSu[20];
    char chuanDoan[20];
    BENHVIEN benhvien;
public:
    void nhap();
    void xuat();
    //friend class BENHVIEN;
    friend void check(BENHNHAN *bn, int n);
    friend void repair(BENHNHAN *bn, int n);
};
void NGUOI::nhap()
{
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoten);
    cout<<"nhap tuoi: "; cin>>tuoi;
}
void NGUOI::xuat()
{
    cout<<"ho ten: "<<hoten<<endl;
    cout<<"tuoi: "<<tuoi<<endl;
}

void BENHNHAN::nhap()
{
    NGUOI::nhap();
    cout<<"nhap ma: "; fflush(stdin); gets(ma);
    cout<<"nhap tien su: "; fflush(stdin); gets(tienSu);
    cout<<"nhap chuan doan: "; fflush(stdin); gets(chuanDoan);
    cout<<"ten benh vien: "; fflush(stdin); gets(benhvien.ten);
    cout<<"dia chi benh vien: "; fflush(stdin); gets(benhvien.diaChi);
    benhvien.giamdoc.nhap();
}
void BENHNHAN::xuat()
{
    NGUOI::xuat();
    cout<<setw(20)<<ma<<setw(20)<<tienSu<<setw(20)<<chuanDoan<<endl;
    cout<<setw(20)<<benhvien.ten<<setw(20)<<benhvien.diaChi<<endl;
    benhvien.giamdoc.xuat();
}
void check(BENHNHAN *bn, int n)
{
    int cnt=0;
    for (int i=0; i<n; i++)
    {
        if (bn[i].tuoi > 30)
        {
            cnt++;
        }
    }
    cout<<"co : "<<cnt<<" benh nhan lon hon 30 tuoi"<<endl;
}
void repair(BENHNHAN *bn, int n)
{
    for (int i=0; i<n; i++)
    {
        if (bn[i].ma == "BN01")
        {
            bn[i].tuoi = 20;
        }
    }
}
int main()
{
    BENHNHAN *bn;
    int n;
    cin>>n;
    bn = new BENHNHAN [n];
    for (int i=0; i<n; i++)
        bn[i].nhap();
    for (int i=0; i<n; i++)
        bn[i].xuat();
    check(bn, n);
    repair(bn, n);
     for (int i=0; i<n; i++)
        bn[i].xuat();
    return 0;
}
