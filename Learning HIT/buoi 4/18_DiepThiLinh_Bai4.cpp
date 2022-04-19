#include <bits/stdc++.h>
using namespace std;
class HANG
{
private:
    char ten[30];
    int gia;
    int sol;
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
};
class DIACHI
{
private:

    char so[10];
    char ngo[10];
    char pho[10];
    char phuong[10];
    char quan[10];
    char thanhPho[10];
public:
    void Nhap();
    void Xuat();
};
class NGUOI
{
private:
    char ten[30];
    char dt[15];
    DIACHI ngay;
public:
    void Nhap();
    void Xuat();
};
class PHIEU
{
private:
    char ma[10];
    char ngay[30];
    NGUOI nguoi;
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
void DIACHI::Nhap()
{
    cout<<"nhap so nha "; fflush(stdin); gets(so);
    cout<<" nhap ngo "; fflush(stdin); gets(ngo);
    cout<<" nhap pho "; fflush(stdin); gets(pho);
    cout<<" nhap phuong "; fflush(stdin); gets(phuong);
    cout<<" nhap quan "; fflush(stdin); gets(quan);
    cout<<" nhap thanh pho "; fflush(stdin); gets(thanhPho);

}
void DIACHI::Xuat()
{
    cout<<"so nha "<<so;
    cout<<", ngo "<<ngo;
    cout<<", pho "<<pho;
    cout<<", phuong "<<phuong;
    cout<<", quan "<<quan;
    cout<<", thanh pho "<<thanhPho<<endl;


}
void NGUOI::Nhap()
{
    cout<<"nhap ten nguoi : "; fflush(stdin); gets(ten);
    cout<<"nhap std : "; fflush(stdin); gets(dt);
    ngay.Nhap();
}
void NGUOI::Xuat()
{
    cout<<"ten nguoi di cho: "<<ten<<endl;
    cout<<"so dien thoai: "<<dt<<endl;
    ngay.Xuat();
}
void PHIEU::Nhap()
{
    cout<<"nhap ma phieu: "; fflush(stdin); gets(ma);
    cout<<"nhap ngay: "; fflush(stdin); gets(ngay);
    nguoi.Nhap();
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
    cout<<"\t\t\t\tPHIEU DI CHO"<<endl;
    cout<<"ma phieu :"<<left<<setw(30)<<ma<<"ngay: "<<ngay<<endl;
    nguoi.Xuat();
    cout<<left<<setw(30)<<"ten hang"<<setw(15)<<"don gia"<<setw(15)<<"so luong"<<setw(15)<<"thanh tien"<<endl;
    int s=0;
    for (int i=0; i<n; i++)
    {
        s+=hang[i].gia*hang[i].sol;
        hang[i].Xuat();
    }

    cout<<left<<setw(60)<<"tong tien: "<<s<<endl;
    cout<<"Luu y: phieu chi co tac dung voi .....";
}
int main()
{
    PHIEU phieu;
    phieu.Nhap();
    phieu.Xuat();
    return 0;
}
