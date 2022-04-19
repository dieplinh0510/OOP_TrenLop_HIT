#include <bits/stdc++.h>
using namespace std;
class ARR
{
private:
    int *val;
    int n;
public:
    ARR();
    ARR(int x);
    ~ARR();
    void Nhap();
    void Xuat();
};
ARR::ARR()
{
    n = 0;
    val = NULL;
}
ARR::ARR(int x)
{
    n = x;
    val = new int [n];
    for (int i=0; i<n; i++)
    {
        val[i] = 0;
    }
}
ARR::~ARR()
{
    n = 0;
    delete [] val;
}

void ARR::Nhap()
{
    cout<<"Nhap n: "; cin>>n;
    val = new int [n];
    for (int i=0; i<n; i++)
    {
        cin>>val[i];
    }
}
void ARR::Xuat()
{
    for (int i=0; i<n; i++)
    {
        cout<<val[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    ARR a(8);
    a.Xuat();
    ARR b;
    b.Nhap();
    b.Xuat();
    return 0;
}


