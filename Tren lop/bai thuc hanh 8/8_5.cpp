#include <bits/stdc++.h>
using namespace std;

class Array
{
    float *arr;
    int n;
public:
    friend istream& operator>>(istream& x, Array y);
    friend ostream& operator<<(ostream& x, Array y);
    Array operator++();
    Array operator--();
};

istream& operator>>(istream& x, Array y)
{
    cout<<"Nhap n: "; cin>>y.n;
    y.arr = new float [y.n];
    for (int i=0; i<y.n; i++)
    {
        cout<<"nhap a["<<i<<"]: ";
        x>>y.arr[i];
    }
    return x;
}

ostream& operator<<(ostream& x, Array y)
{
    for (int i=0; i<y.n; i++)
        x<<y.arr[i]<<" ";
    return x;
}

Array Array::operator++()
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
            if (arr[i]<arr[j])
            {
                float temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
    }
    return *this;
}

Array Array::operator--()
{
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
            if (arr[i]>arr[j])
            {
                float temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
    }
    return *this;
}
int main()
{
    Array arr;
    cout<<"nhap mang: "<<endl;
    cin>>arr;
    arr=++arr;
    cout<<"mang sap xep tang: "<<endl;
    cout<<arr<<endl;
    arr=--arr;
    cout<<"mang sap xep giam: "<<endl;
    cout<<arr<<endl;
    return 0;
}
