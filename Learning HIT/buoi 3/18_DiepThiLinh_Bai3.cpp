#include <bits/stdc++.h>
using namespace std;
class Date{
	private:
		int day;
		int month;
		int year;
	public:
		void nhap();
		void xuat();
};
class DiaChi{
	private:
		char dienThoai[12];
		char phuong[30];
		char quan[30];
		char thanhPho[30];
	public:
		friend class DoanhNghiep;
		
};
class DoanhNghiep{
	private:
		int maDn;
		char tenDn[60];
		Date ngayTl;
		DiaChi diaChi;
		char giamDoc[30];
		long doanhThu;
	public:
		void nhap();
		void xuat();
};
void Date::nhap(){
	cout<<"nhap day:"; cin>>day;
	cout<<"nhap month: "; cin>>month;
	cout<<"nhap year: "; cin>>year;
}
void Date::xuat(){
	cout<<"day: "<<day<<endl;
	cout<<"month: "<<month<<endl;
	cout<<"year: "<<year<<endl;
}
void DoanhNghiep::nhap(){
	cout<<"nhap maDn: "; cin>>maDn;
	cout<<"nhap tenDn: "; fflush(stdin); gets(tenDn);
	cout<<"date: "<<endl;
	ngayTl.nhap();
	cout<<"dia chi: "<<endl;
	cout<<"dien thoai: "; fflush(stdin); gets(diaChi.dienThoai);
	cout<<"phuong: "; fflush(stdin); gets(diaChi.phuong);
	cout<<"quan: "; fflush(stdin); gets(diaChi.quan);
	cout<<"thanhPho: "; fflush(stdin); gets(diaChi.thanhPho);
	cout<<"giam doc :"; fflush(stdin); gets(giamDoc);
	cout<<"doanh thu: "; cin>>doanhThu;
}
void DoanhNghiep::xuat(){
	cout<<"ma Dn: "<<maDn<<endl;
	cout<<"ten Dn: "<<tenDn<<endl;
	cout<<"date: "<<endl;
	ngayTl.xuat();
	cout<<"dia chi: "<<endl;
	cout<<"dien thoai: "<<diaChi.dienThoai<<endl;
	cout<<"phuong: "<<diaChi.phuong<<endl;
	cout<<"quan: "<<diaChi.quan<<endl;
	cout<<"thanh pho: "<<diaChi.thanhPho<<endl;
	cout<<"giam doc: "<<giamDoc<<endl;
	cout<<"doanh thu: "<<doanhThu<<endl;
}
int main(){
	DoanhNghiep dn;
	dn.nhap();
	dn.xuat();
	return 0;
}
