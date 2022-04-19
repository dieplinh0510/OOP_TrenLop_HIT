#include <bits/stdc++.h>
using namespace std;
class LOPHOC;
class NGUOI
{
protected:
    char hoTen[30];
    char ngaySinh[20];
    char queQuan[50];
public:
    void Nhap();
    void Xuat();
};

class SINHVIEN:protected NGUOI
{
private:
    char maSv[10];
    char nganh[20];
    int khoaHoc;
public:
    void Nhap();
    void Xuat();
    friend void Check(LOPHOC lh);
    friend void Sort(LOPHOC lh);
};

class LOPHOC
{
private:
    char ma[10];
    char ten[10];
    char ngay[20];
    SINHVIEN *x;
    int n;
    char giaoVien[20];
public:
    void Nhap();
    void Xuat();
    friend void Check(LOPHOC lh);
    friend void Sort(LOPHOC lh);
};

void NGUOI::Nhap()
{
    cout<<"Nhap ho ten: "; fflush(stdin); gets(hoTen);
    cout<<"Nhap ngay sinh: "; fflush(stdin); gets(ngaySinh);
    cout<<"Nhap que quan: "; fflush(stdin); gets(queQuan);
}
void NGUOI::Xuat()
{
    cout<<"Ho ten: "<<hoTen<<endl;
    cout<<"Ngay sinh: "<<ngaySinh<<endl;
    cout<<"Que quan: "<<queQuan<<endl;
}

void SINHVIEN::Nhap()
{
    NGUOI::Nhap();
    cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(maSv);
    cout<<"Nhap nganh: "; fflush(stdin); gets(nganh);
    cout<<"Nhap khoa hoc: "; cin>>khoaHoc;
}
void SINHVIEN::Xuat()
{
    NGUOI::Xuat();
    cout<<"Ma sinh vien: "<<maSv<<endl;
    cout<<"Nganh: "<<nganh<<endl;
    cout<<"Khoa hoc: "<<khoaHoc<<endl;
}

void LOPHOC::Nhap()
{
    cout<<"Nhap ma lop hoc: "; fflush(stdin); gets(ma);
    cout<<"Nhap ten lop hoc: "; fflush(stdin); gets(ten);
    cout<<"Nhap ngay mo: "; fflush(stdin); gets(ngay);
    cout<<"Nhap so sinh vien: "; cin>>n;
    x = new SINHVIEN [n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap sinh vien thu "<<i+1<<" : "<<endl;
        x[i].Nhap();
    }
    cout<<"Nhap giao vien: "; fflush(stdin); gets(giaoVien);
}
void LOPHOC::Xuat()
{
    cout<<"Ma lop hoc: "<<ma<<endl;
    cout<<"Ten lop hoc: "<<ten<<endl;
    cout<<"Ngay mo: "<<ngay<<endl;
    for (int i=0; i<n; i++)
    {
        x[i].Xuat();
    }
    cout<<"Giao vien: "<<giaoVien<<endl;
}
void Check(LOPHOC lh)
{
    int cnt=0;
    for (int i=0; i<lh.n; i++)
    {
        if (lh.x[i].khoaHoc == 11)
        {
            cnt++;
        }
    }
    cout<<"Co "<<cnt<<" sinh vien khoa 11"<<endl;
}

void Sort(LOPHOC lh)
{
    for (int i=0; i<lh.n-1; i++)
    {
        for (int j=i+1; j<lh.n; j++)
        {
            if (lh.x[i].khoaHoc>lh.x[j].khoaHoc)
            {
                SINHVIEN temp = lh.x[i];
                lh.x[i]=lh.x[j];
                lh.x[j]=temp;
            }
        }
    }
}
int main()
{
    LOPHOC lh;
    lh.Nhap();
    lh.Xuat();
    cout<<endl;
    Check(lh);
    cout<<endl;
    Sort(lh);
    lh.Xuat();
    return 0;
}
