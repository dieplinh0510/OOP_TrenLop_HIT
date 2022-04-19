#include <bits/stdc++.h>
using namespace std;
class ARRAY
{
private:
    int n;
    int *a;
public:
    ARRAY();
    ~ARRAY();
    friend istream &operator>>(istream &is, ARRAY &x);
    friend ostream &operator<<(ostream &os, ARRAY x);
    ARRAY operator-();
    double operator++();
};

ARRAY::ARRAY()
{
    this->n=0;
    this->a=new int [n];
}
ARRAY::~ARRAY()
{
    this->n=0;
    this->a=NULL;
}

istream &operator>>(istream &is, ARRAY &x)
{
    cout << "Nhap n = "; cin >> x.n;
    x.a = new int[x.n];////
    for (int i=0; i<x.n; i++)
    {
        cout<<"nhap phan tu thu: "<<i+1<<endl;
        is>>x.a[i];
    }
    return is;
}

ostream &operator<<(ostream &os, ARRAY x)
{
    for (int i=0; i<x.n; i++)
    {
        os<<x.a[i];
    }
    return os;
}
ARRAY ARRAY::operator-()
{
    for (int i=0; i<this->n; i++)
    {
        if (this->a[i]> 5)
        {
            this->a[i]= -this->a[i];
        }
    }
    return *this;
}

double ARRAY::operator++(){
    int max=this->a[0];
    int min=this->a[0];
    for(int i=1; i<this->n; i++){
        max = this->a[i]<max?max:this->a[i];
        min = this->a[i]>min?min:this->a[i];
    }
    return 1.0*(max+min)/2;
}
int main()
{
    ARRAY a1, a2;
    cout<<"nhap mang a1"<<endl; cin>>a1;
    cout<<"nhap mang a2"<<endl; cin>>a2;
    cout << "Mang a1: " << a1 << endl;
    cout << "Mang a2: " << a2 << endl;
    cout<<"dao dau a1: "<<-a1<<endl;
    cout<<"dao dau a2: "<<-a2<<endl;
    cout << "Trung binh a1: " << ++a1 << endl;
     cout << "Trung binh a2: " << ++a2 << endl;
    return 0;
}


