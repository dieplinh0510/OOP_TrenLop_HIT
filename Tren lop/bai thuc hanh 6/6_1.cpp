#include <bits/stdc++.h>
using namespace std;
class PERSON
{
protected:
    char hoTen[20];
    char ngaySinh[20];
    char queQuan[30];

};

class KYSU : protected PERSON
{
private:
    char nganh[10];
    int namTN;
public:
    void Nhap();
    void Xuat();
    friend void Check(KYSU *kysu, int n);
};

void KYSU::Nhap()
{
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Nhap ngay sinh: "; fflush(stdin); gets(ngaySinh);
    cout<<"Nhap que quan: "; fflush(stdin); gets(queQuan);
    cout<<"Nhap nganh: "; fflush(stdin); gets(nganh);
    cout<<"Nhap na tot nghiep : "; cin>>namTN;
}
void KYSU::Xuat()
{
    cout<<setw(20)<<hoTen<<setw(20)<<ngaySinh<<setw(20)<<queQuan<<setw(20)<<nganh<<setw(20)<<namTN<<endl;
}

void Check(KYSU *kysu, int n)
{
    int maxx = kysu[0].namTN;
    for (int i=0; i<n; i++)
    {
        if (kysu[i].namTN > maxx)
        {
            maxx = kysu[i].namTN;
        }
    }
    for (int i=0; i<n; i++)
    {
        if (kysu[i].namTN == maxx)
        {
            kysu[i].Xuat();
        }
    }
}
int main()
{
    int n;
    cout<<"Nhap so ky su: "; cin>>n;

    KYSU *kysu = new KYSU [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap ki su thu "<<i+1<<" : "<<endl;
        kysu[i].Nhap();
    }
    cout<<setw(20)<<"Ho ten"<<setw(20)<<"Ngay sinh"<<setw(20)<<"Que quan"<<setw(20)<<"Nganh"<<setw(20)<<"Nam tot nghiep"<<endl;
    for (int i=0; i<n; i++)
    {
        kysu[i].Xuat();
    }
    cout<<"Nam tot nghiep lon nhat: "<<endl;
    cout<<setw(20)<<"Ho ten"<<setw(20)<<"Ngay sinh"<<setw(20)<<"Que quan"<<setw(20)<<"Nganh"<<setw(20)<<"Nam tot nghiep"<<endl;
    Check(kysu, n);

    return 0;
}
