#include <bits/stdc++.h>
using namespace std;
class Hang{
	private:
		int MHang;
		char Ten[30];
		int NgayN;
		int NgaySx;
		int Don;
		int SoL;
	public:
		Hang();
		Hang(int MHang, char Ten, int NgayN, int NgaySx, int Don, int SoL)
		~Hang(){};
		void Nhap();
		void Xuat();
};
void Hang::Nhap(){
	cout<<"nhap ma hang: "; cin>>MHang; fflush(stdin);
	cout<<"nhap ten hang: "; cin>>Ten;
	cout<<"nhap ngay nhap hang: "; cin>>NgayN;
	cout<<"nhap ngay san xuat: "; cin>>NgaySx;
	cout<<"nhap don gia: "; cin>>Don;
	cout<<"nhap so luong: "; cin>>SoL;
}
void Hang::Xuat(){
	cout<<"Ma hang: "<<MHang<<endl;
	cout<<"Ten hang: "<<Ten<<endl;
	cout<<"Ngay nhap hang: "<<NgayN<<endl;
	cout<<"Ngay san xuat: "<<NgaySx<<endl;
	cout<<"Don gia: "<<Don<<endl;
	cout<<"So luong: "<<SoL<<endl;
	cout<<"Thanh tien: "<<Don*Sol<<endl;
}
int main(){
	Hang hag(1, 2, 3, 4, 5, 6);
	hag.Xuat();
	Hang hag1;
	hag1.Nhap();
	hag1.Xuat();
	return 0;
}
