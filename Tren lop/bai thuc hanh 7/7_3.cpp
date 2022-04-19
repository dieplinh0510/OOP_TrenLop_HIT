#include <bits/stdc++.h>
using namespace std;
class KHOA
{
private:
    char ma[20];
    char ten[20];
    char truongKhoa[20];
public:
    friend class TRUONGDH;

};
class BAN
{
private:
    char ma[20];
    char ten[20];
    char ngay[20];
public:
    friend class TRUONGDH;
};
class TRUONGDH
{
protected:
    KHOA *x;
    int n;
    BAN *y;
    int m;
public:
    void nhap();
    void xuat();
};

class TRUONG : public TRUONGDH
{
private:
    char ma[20];
    char ten[20];
    char diaChi[20];
public:
    void nhap();
    void xuat();
};

void TRUONGDH::nhap()
{
    cout<<"nhap n: ";
    cin>>n;
    x= new KHOA [n];
    for (int i=0; i<n; i++)
    {
        cout<<"nhap khoa thu "<<i+1<<" : "<<endl;
        cout<<"nhap ma khoa: "; fflush(stdin); gets(x[i].ma);
        cout<<"nhap ten khoa: "; fflush(stdin); gets(x[i].ten);
        cout<<"nhap truong khoa: "; fflush(stdin); gets(x[i].truongKhoa);

    }
    cout<<"nhap m: ";
    cin>>m;
    y= new BAN [m];
    for (int i=0; i<m; i++)
    {
        cout<<"nhap ban thu "<<i+1<<" : "<<endl;
        cout<<"nhap ma ban: "; fflush(stdin); gets(y[i].ma);
        cout<<"nhap ten ban: "; fflush(stdin); gets(y[i].ten);
        cout<<"nhap truong ban: "; fflush(stdin); gets(y[i].ngay);
    }
}
void TRUONGDH::xuat()
{
    for (int i=0; i<n; i++)
    {
        cout<<setw(20)<<x[i].ma<<setw(20)<<x[i].ten<<setw(20)<<x[i].truongKhoa<<endl;
    }
    for (int i=0; i<m; i++)
    {
        cout<<setw(20)<<y[i].ma<<setw(20)<<y[i].ten<<setw(20)<<y[i].ngay<<endl;
    }
}

void TRUONG::nhap()
{
    TRUONGDH::nhap();
    cout<<"Nhap ma truong: "; fflush(stdin); gets(ma);
    cout<<"Nhap ten truong: "; fflush(stdin); gets(ten);
    cout<<"Nhap dia chi: "; fflush(stdin); gets(diaChi);
}
void TRUONG::xuat()
{
    TRUONGDH::xuat();
    cout<<setw(20)<<ma<<setw(20)<<ten<<setw(20)<<diaChi<<endl;
}
int main()
{
    TRUONG truong;
    truong.nhap();
    truong.xuat();
    return 0;
}
