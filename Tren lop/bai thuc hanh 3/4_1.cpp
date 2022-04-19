#include <bits/stdc++.h>
using namespace std;
class SINHVIEN
{
private:
    char maSV[10];
    char hoTen[20];
    float toan;
    float ly;
    float hoa;
public:
    void Nhap();
    void Xuat();
    friend void Sort(SINHVIEN *svs, int n);
};

void SINHVIEN::Nhap()
{
    cout<<"Nhap ma sv: "; fflush(stdin); gets(maSV);
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Nhap diem toan: "; cin>>toan;
    cout<<"Nhap diem ly: "; cin>>ly;
    cout<<"Nhap diem hoa: "; cin>>hoa;
}
void SINHVIEN::Xuat()
{
    cout<<left<<setw(20)<<maSV<<setw(20)<<hoTen<<setw(20)<<toan<<setw(20)<<ly<<setw(20)<<hoa<<setw(20)<<toan+ly+hoa<<endl;

}
void Sort(SINHVIEN *svs, int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (svs[i].hoa+svs[i].ly+svs[i].toan > svs[j].hoa+svs[j].ly+svs[j].toan)
            {
                SINHVIEN temp = svs[i];
                svs[i]=svs[j];
                svs[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Nhap so sinh vien: "; cin>>n;
    SINHVIEN *svs= new SINHVIEN [n];
    for (int i=0; i<n; i++)
    {
        svs[i].Nhap();
    }
    cout<<endl<<left<<setw(20)<<"Ma sv"<<setw(20)<<"Ho ten"<<setw(20)<<"Toan"<<setw(20)<<"Ly"<<setw(20)<<"Hoa"<<setw(20)<<"Tong diem"<<endl;
    for (int i=0; i<n; i++)
    {
        svs[i].Xuat();
    }
    Sort(svs,n);
        cout<<endl<<left<<setw(20)<<"Ma sv"<<setw(20)<<"Ho ten"<<setw(20)<<"Toan"<<setw(20)<<"Ly"<<setw(20)<<"Hoa"<<setw(20)<<"Tong diem"<<endl;
        for (int i=0; i<n; i++)
        {
            svs[i].Xuat();
        }
    return 0;
}
