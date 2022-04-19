#include <bits/stdc++.h>
using namespace std;
class START
{
private:
    float a, b, c;
public:
    void Nhap();
    void BienLuan();
};
void START::Nhap()
{
    cout<<"nhap a: "; cin>>a;
    cout<<"nhap b: "; cin>>b;
    cout<<"nhap c: "; cin>>c;
}
void START::BienLuan()
{
    if (a==0)
    {
        cout<<"khong phai pt bac 2";
    }
    else
    {
        float delta=b*b-4*a*c;
        if (delta<0)
        {
            cout<<"pt vo nghiem";
        }
        else if (delta==0)
        {
            cout<<"phuong trinh co nghiem kep: "<<-b/(2*a);
        }
        else
        {
            cout<<"pt co 2 nghiem phan biet: "<<endl;
            float x1=(-b-sqrt(delta))/(2*a);
            float x2=(-b+sqrt(delta))/(2*a);
            cout<<"x1 = "<<x1<<endl;
            cout<<"x2 = "<<x2<<endl;
        }
    }
}
int main()
{
    START x;
    x.Nhap();
    x.BienLuan();
    return 0;
}
