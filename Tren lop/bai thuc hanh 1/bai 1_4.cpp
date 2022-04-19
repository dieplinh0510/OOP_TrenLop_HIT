#include <bits/stdc++.h>
using namespace std;
class ARRAY
{
 private:
     char ma[15];
     char ten[30];
     char nxb[30];
     int soTrang;
     float giatien;
 public:
    void Nhap();
    void Xuat();
};
void ARRAY::Nhap()
{
    cout<<"nhap ma sach: "; fflush(stdin); gets(ma);
    cout<<"nhap ten sach: "; fflush(stdin); gets(ten);
    cout<<"nhap nxb: "; fflush(stdin); gets(nxb);
    cout<<"nhap so trang: "; cin>>soTrang;
    cout<<"nhap so tien: "; cin>>giatien;
}
void ARRAY::Xuat()
{
    cout<<left<<setw(15)<<ma<<setw(15)<<ten<<setw(15)<<nxb<<setw(15)<<soTrang<<setw(15)<<giatien<<endl;
}
int main()
{
    int n;
    cout<<"nhap so cuon sach : "; cin>>n;
    ARRAY *x= new ARRAY [n];
    for (int i=0; i<n; i++)
    {
        cout<<"nhap cuon sach thu "<<i+1<<endl;
        x[i].Nhap();
    }
    cout<<left<<setw(15)<<"ma"<<setw(15)<<"ten"<<setw(15)<<"nxb"<<setw(15)<<"so trang"<<setw(15)<<"gia tien"<<endl;
    for (int i=0; i<n; i++)
    {
        x[i].Xuat();
    }
    return 0;
}
