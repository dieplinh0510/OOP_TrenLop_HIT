#include <bits/stdc++.h>
using namespace std;
class PhuongTrinh{
	private:
		float a, b, c;
	public:
		PhuongTrinh();
		PhuongTrinh(float aNew, float bNew, float cNew);
		void Nhap();
		void Xuat();
		void Giai();
		~PhuongTrinh(){};
};
PhuongTrinh::PhuongTrinh(){
	a= 0;
	b= 0;
	c= 0;
}
PhuongTrinh::PhuongTrinh(float aNew, float bNew, float cNew){
	a= aNew;
	b= bNew;
	c= cNew;
}
void PhuongTrinh::Nhap(){
	cout<<"Nhap a: "; cin>>a;
	cout<<"nhap b: "; cin>>b;
	cout<<"nhap c: "; cin>>c;
}
void PhuongTrinh::Xuat(){
	cout<<a<<"x2 + "<<b<<" x + "<<c<<" = 0"<<endl;
}
void PhuongTrinh::Giai(){
	float x1, x2;
	float delta=b*b-4*a*c;
	if (delta<0){
		cout<<"Phuong trinh vo nghiem"<<endl;
	} else if (delta==0){
		cout<<"phuong trinh co nghiem kep "<<-b/(2*a)<<endl;
	} else {
		cout<<"phuong trinh co 2 nghiem phan biet :";
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		cout<<x1<<"  "<<x2<<endl;
	}
}
int main(){
	PhuongTrinh pt(1, 2, 1);
	pt.Xuat();
	pt.Giai();
	PhuongTrinh pt1;
	pt1.Nhap();
	pt1.Xuat();
	pt1.Giai();
	return 0;
}
