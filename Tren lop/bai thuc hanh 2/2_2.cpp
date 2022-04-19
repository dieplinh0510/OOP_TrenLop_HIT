#include <bits/stdc++.h>
using namespace std;
class MANG
{
private:
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    void sap();
};

void MANG::nhap()
{
    cout<<"nhap n: "; cin>>n;
    a= new int [n];
    for (int i=0; i<n; i++)
    {
        cout<<"nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
    }
}
void MANG::sap()
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void MANG::xuat()
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    MANG b;
    b.nhap();
    b.sap();
    cout<<"mang sau khi sap xep: "<<endl;
    b.xuat();
    return 0;
}
