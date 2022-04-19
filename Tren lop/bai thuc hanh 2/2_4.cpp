#include <bits/stdc++.h>
using namespace std;
class DNG
{
private:
    char ten[30];
    char diaChi[30];
    int soNV;
    int dThu;
public:
    void nhap();
    void xuat();
};

void DNG::nhap()
{
    cout<<"nhap ten daonh nghiep: "; fflush(stdin); gets(ten);
    cout<<"nhap dia chi doanh nghiep : "; fflush(stdin); gets(diaChi);
    cout<<"nhap so nhan vien: "; cin>>soNV;
    cout<<"nhap doanh thu: "; cin>>dThu;
}

void DNG::xuat()
{
    cout<<left<<setw(20)<<ten<<setw(20)<<diaChi<<setw(20)<<soNV<<setw(20)<<dThu<<endl;
}
int main()
{
    int n;
    cout<<"nhap so doanh nghep: "; cin>>n;
    DNG *a= new DNG [n];
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"nhap doanh nghiep thu : "<<i+1<<endl;
        a[i].nhap();
    }
    cout<<endl<<left<<setw(20)<<"ten DN"<<setw(20)<<"dia chi DN"<<setw(20)<<"so NV"<<setw(20)<<"doanh thu"<<endl;
    for (int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
