#include <bits/stdc++.h>
using namespace std;
class MANG
{
private:
    float *a;
    int n;
public:
    void nhap();
    void xuat();
    void max_min();
};

void MANG::nhap()
{
    cout<<"nhap n: "; cin>>n;
    a= new float [n];
    for (int i=0; i<n; i++)
    {
        cout<<"nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
    }
}
void MANG::xuat()
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
void MANG::max_min()
{
    float maxx=a[0];
    float minn=a[0];
    for(int i=1; i<n; i++)
    {
        maxx=max(a[i], maxx);
        minn=min(a[i], minn);
    }
    cout<<endl<<"max= "<<maxx<<endl;
    cout<<"min= "<<minn<<endl;
}
int main()
{
    MANG b;
    b.nhap();
    b.xuat();
    b.max_min();
    return 0;
}
