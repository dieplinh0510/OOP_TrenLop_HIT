#include <bits/stdc++.h>
using namespace std;
class HANG;
class DATE
{
private:
    int d, m, y;
public:
    friend class HANG;
    friend void Check(HANG *h, int n);
};
class HANG
{
private:
    char ma[10];
    char ten[30];
    DATE ngaySx;
public:
    void Nhap();
    void Xuat();
    friend void Check(HANG *h, int n);
};

void HANG::Nhap()
{
    cout<<"Nhap ma hang: "; fflush(stdin); gets(ma);
    cout<<"Nhap ten hang: "; fflush(stdin); gets(ten);
    cout<<"Nhap ngay sx: "; cin>>ngaySx.d;
    cout<<"Nhap thang sx: "; cin>>ngaySx.m;
    cout<<"Nhap nam sx: "; cin>>ngaySx.y;
}
void HANG::Xuat()
{
    cout<<left<<setw(20)<<ma<<setw(20)<<ten<<ngaySx.d<<"/"<<ngaySx.m<<"/"<<ngaySx.y<<endl;
}

void Check(HANG *h, int n)
{
    for (int i=0; i<n; i++){
        if (h[i].ngaySx.y==2017){
            h[i].Xuat();
        }
    }
}
int main()
{
    int n;
    cout<<"So luong mat hang: "; cin>>n;
    HANG *h = new HANG [n];
    for (int i=0; i<n; i++)
    {
        h[i].Nhap();
    }
    cout<<left<<setw(20)<<"Ma"<<setw(20)<<"Ten"<<setw(20)<<"Ngay"<<endl;
    for (int i=0; i<n; i++)
    {
        Check(h, n);
    }
    return 0;

}
