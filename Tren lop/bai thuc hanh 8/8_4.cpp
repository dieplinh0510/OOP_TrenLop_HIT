#include <bits/stdc++.h>
using namespace std;

class Matrix
{
    int n, m;
    double **a;
public:
    Matrix operator+(Matrix y);
    Matrix operator-(Matrix y);
    Matrix operator-();
    friend istream& operator>>(istream& x, Matrix y);
    friend ostream& operator<<(ostream&x, Matrix y);
};
istream& operator>>(istream& x, Matrix y)
{
    cout<<"nhap n: "; x>>y.n;
    cout<<"nhap m: "; x>>y.m;
    y.a = new double*[y.n];
    for (int i=0; i<y.n; i++)
        y.a[i] = new double [y.m];
    for (int i=0; i<y.n; i++){
        for (int j=0; j<y.m; j++){
            cout<<"nhap a["<<i<<"]["<<j<<"]= ";
            x>>y.a[i][j];
        }
    }
    return x;
}


ostream& operator<<(ostream& x, Matrix y)
{
    for (int i=0; i<y.n; i++){
        for (int j=0; j<y.m; j++)
            x<<y.a[i][j]<<" ";
        cout<<endl;
    }
    return x;
}
Matrix Matrix::operator+(Matrix y)
{
    Matrix temp;
    if (m==y.m; n==y.n)
    {
        temp.n= n;
        temp.m = m;
        temp.a= new double*[n];
        for (int i=0; i<n; i++)
            temp.a[i] = new double[m];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
                temp.a[i][j] = a[i][j]+y.a[i][j];
        }
    }
    else {
        cout<<"hai ma tran khong cung kich thuoc"<<endl;
    }
    return temp;
}

Matrix Matrix::operator-(Matrix y)
{
    Matrix temp;
    if (m==y.m; n==y.n)
    {
        temp.n= n;
        temp.m = m;
        temp.a= new double*[n];
        for (int i=0; i<n; i++)
            temp.a[i] = new double[m];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
                temp.a[i][j] = a[i][j]-y.a[i][j];
        }
    }
    else {
        cout<<"hai ma tran khong cung kich thuoc"<<endl;
        temp.n= temp.m =0;
    }
    return temp;
}

Matrix Matrix::operator-()
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            a[i][j] = -a[i][j];
    }
    return *this;
}

int main()
{
    Matrix p, q;
    cout<<"nhap ma tran p: "<<endl;
    cin>>p;
    cout<<"nhap ma tran q: "<<endl;
    cin>>q;
    p=-p; q=-q;
    cout<<"da doi dau p"<<endl;
    cout<<p;
    cout<<"da doi dau q"<<endl;
    cout<<q;
    Matrix y= q+p;
    Matrix x= p-q;
    cout<<"tong: "<<endl;
    cout<<y;
    cout<<"hieu: "<<endl;
    cout<<x;
    return 0;
}
