#include <bits/stdc++.h>
using namespace std;
class RECTANGLE
{
private:
    float dai;
    float rong;
public:
    void Nhap();
    void Ve();
    float DienTich();
    float ChuVi();
};
void RECTANGLE::Nhap()
{
    cout<<"nhap chieu dai: "; cin>>dai;
    cout<<"nhap chieu rong: "; cin>>rong;
}

void RECTANGLE::Ve()
{
    for (int i=0; i<rong; i++)
    {
        for (int j=0; j<dai; j++)

        {
            cout<<" * ";
        }
        cout<<endl;
    }
}

float RECTANGLE::DienTich()
{
    return dai*rong;
}
float RECTANGLE::ChuVi()
{
    return (dai+rong)*2;
}
int main()
{
    RECTANGLE x;
    x.Nhap();
    x.Ve();
    cout<<"dien tich hinh chu nhat: "<<x.DienTich()<<endl;
    cout<<"chu vi hinh chu nhat: "<<x.ChuVi();
    return 0;
}
