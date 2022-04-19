#include <iostream>
using namespace std;
class CanBo{
	public:
		int Ma;
		char HoTen[30];
		int ngSinh;
		int soNgay;
		void Nhap();
		int TinhLuong();
		void Xuat();
};
void CanBo::Nhap(){
	cout<<"nhap ma can bo: "; cin>>Ma;
	fflush(stdin);
	cout<<"nhap ho ten: "; cin>>HoTen;
	cout<<"nhap ngay sinh: "; cin>>ngSinh;
	cout<<"so ngay lam viec: "; cin>>soNgay;
	
}
int CanBo::TinhLuong(){
	return soNgay*250000;
}
void CanBo::Xuat(){
	cout<<"ma can bo: "<<Ma<<endl;
	cout<<"ho va ten: "<<HoTen<<endl;
	cout<<"ngay sinh: "<<ngSinh<<endl;
	cout<<"so ngay lam viec: "<<soNgay<<endl;
	
}
int main(){
	CanBo a;
	a.Nhap();
	a.Xuat();
	cout<<"tien luong duoc nhan: "<<a.TinhLuong()<<endl;
	return 0;
}
