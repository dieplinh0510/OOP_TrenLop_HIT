#include <bits/stdc++.h>
using namespace std;
class OBJECT
{
private:
    char ma[15];
    char ten[30];
    int donGia;
    int soL;
public:
    void Nhap();
    void Xuat();
};
void OBJECT::Nhap()
{
    cout<<"nhap ma hang: "; fflush(stdin); gets(ma);
    cout<<"nhap ten hang: "; fflush(stdin); gets(ten);
    cout<<"nhap don gia: "; cin>>donGia;
    cout<<"nhao so luong: "; cin>>soL;
}
void OBJECT::Xuat()
{

    cout<<left<<setw(15)<<ma<<setw(15)<<ten<<setw(15)<<donGia<<setw(15)<<soL<<setw(15)<<donGia*soL<<endl;
}
int main()
{
    int n;
    cout<<"nhap so mat hang: "; cin>>n;
    OBJECT *x= new OBJECT [n];
    for (int i=0; i<n; i++)
    {
        cout<<"nhap thong tin mat hang thu "<<i+1<<endl;
        x[i].Nhap();
    }
    cout<<left<<setw(15)<<"ma"<<setw(15)<<"ten"<<setw(15)<<"dong gia"<<setw(15)<<"so luong"<<setw(15)<<"thanh tien"<<endl;
    for (int i=0; i<n; i++)
    {

        x[i].Xuat();
    }
    return 0;
}
