#include <bits/stdc++.h>
using namespace std;
class STUDENT
{
private:
    char maSv[10];
    char hoTen[30];
    int tuoi;
    float diem;
public:
    void Nhap();
    void Xuat();
};

void STUDENT::Nhap()
{
    cout<<"nhap ma sinh vien: "; fflush(stdin); gets(maSv);
    cout<<"nhap ho ten sinh vien: "; fflush(stdin); gets(hoTen);
    cout<<"nhap tuoi sinh vien: "; cin>>tuoi;
    cout<<"nhap diem sinh vien: "; cin>>diem;
}

void STUDENT::Xuat()
{
    cout<<"ma sinh vien: "<<maSv<<endl;
    cout<<"ho ten sinh vien: "<<hoTen<<endl;
    cout<<"tuoi sinh vien: "<<tuoi<<endl;
    cout<<"diem sinh vien: "<<diem<<endl;
}
int main()
{
    STUDENT a;
    STUDENT b;
    a.Nhap();
    b.Nhap();
    a.Xuat();
    b.Xuat();
    return 0;
}
