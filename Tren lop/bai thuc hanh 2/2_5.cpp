#include <bits/stdc++.h>
using namespace std;
class OTO
{
private:
    char ma[10];
    float gia;
    int soNam;
    float tiLe;
public:
    void nhap();
    void xuat();
};

void OTO::nhap()
{
    cout<<"nhap ma: "; fflush(stdin); gets(ma);
    cout<<"gia mua moi: "; cin>>gia;
    cout<<"so nam sdung: "; cin>>soNam;
    cout<<"ti le khau hao: "; cin>>tiLe;
}

void OTO::xuat()
{
    cout<<left<<setw(15)<<ma<<setw(15)<<gia<<setw(15)<<soNam<<setw(15)<<tiLe<<setw(15)<<gia*pow((1-tiLe/100), soNam)<<endl;
}
int main()
{
    int n;
    cout<<"nhap n: "; cin>>n;
    OTO *oto= new OTO [n];
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"nhap oto thu : "<<i+1<<endl;
        oto[i].nhap();
    }
    cout<<endl<<left<<setw(15)<<"ma"<<setw(15)<<"gia mua moi"<<setw(15)<<"so nam"<<setw(15)<<"ti le(100%)"<<setw(15)<<"gia hien tai"<<endl;
    for (int i=0; i<n; i++)
    {
        oto[i].xuat();
    }
    return 0;
}
