#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		int a, b;
	public:
		PhanSo();
		PhanSo(int aNew, int bNew);
		~PhanSo(){};
		void Nhap();
		void Xuat();
		void Rut();
};
PhanSo::PhanSo(){
	a=0;
	b=0;
}
PhanSo::PhanSo(int aNew, int bNew){
	a=aNew;
	b=bNew;
}
void PhanSo::Nhap(){
	cout<<"nhap a: "; cin>>a;
	cout<<"nhap b: "; cin>>b;
}
void PhanSo::Xuat(){
	cout<<a<<"/"<<b<<endl;
}
int UCLN(int x,int y){
    if (x%y!=0)
        return UCLN(y,x%y);
    else
        return y;
}
void PhanSo::Rut(){
	int ucln = UCLN(abs(a),abs(b));
//	cout<<ucln<<endl;
    a=a/ucln;
    b=b/ucln;
    //cout<<a<<endl;
    if (a==0){
    	cout<<0;
	}
	if (b==1){
		cout<<a;
	} else {
		cout<<a<<"/"<<b;
	}
//	if (a>0 ){
//		cout<<a<<"/"<<b;
//	} 
}
int main(){
	PhanSo ps(4,8);
	ps.Xuat();
	cout<<"phan so sau khi rut gon: ";
	ps.Rut();
	ps.Xuat();
	PhanSo ps1;
	ps1.Nhap();
	ps1.Xuat();
	cout<<"phan so sau khi rut gon: ";
	ps1.Rut();
//	ps1.Xuat();
	return 0;
}
