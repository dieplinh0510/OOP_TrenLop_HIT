#include <bits/stdc++.h>
using namespace std;
class PT
{
private:
    float a, b, c;
public:
    PT();
    PT(float a, float b, float c);
    void Nhap();
    void Xuat();
    void Giai();
};
PT::PT()
{
    this->a = 0;
    this->b = 0;
    this->c = 0;
}
PT::PT(float a, float b, float c)
{
    this->a= a;
    this->b= b;
    this->c= c;
}
void PT::Nhap()
{
    cout<<"Nhap a: "; cin>>a;
    cout<<"Nhap b: "; cin>>b;
    cout<<"Nhap c: "; cin>>c;
}
void PT::Xuat()
{
    cout<<a<<"* x"<<(char)253<<" + "<<b<<" * x + "<<c<<" = 0"<<endl;
}
void PT::Giai()
{
    if (a==0)
    {
        cout<<"khong phai pt bac 2"<<endl;
    }
    else
    {
        float delta=b*b-4*a*c;
        if (delta<0)
        {
            cout<<"pt vo nghiem"<<endl;
        }
        else if (delta==0)
        {
            cout<<"phuong trinh co nghiem kep: "<<-b/(2*a)<<endl;
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
    PT p(1, 2, 3);
    p.Xuat();
    p.Giai();
    PT q;
    q.Nhap();
    q.Xuat();
    q.Giai();
    return 0;
}
