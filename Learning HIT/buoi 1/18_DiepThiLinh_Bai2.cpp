#include <iostream>
using namespace std;
class SinhVien{
	public:
		int MSv;
		char HoTen[30];
		int ngSinh;
		int thSinh;
		int nSinh;
		char GTinh[30];
		float DTB;
		char DaoDuc[30];
		void nhap();
		void xuat();
};

void SinhVien::nhap(){
	cout<<"nhap MSV: "; cin>>MSv;
	fflush(stdin);
	cout<<"nhap ho ten: "; gets(HoTen);
	cout<<"nhap ngay sinh: "; cin>>ngSinh;
	cout<<"nhap thang sinh: "; cin>>thSinh;
	cout<<"nhap nam sinh: "; cin>>nSinh;
	fflush(stdin);
	cout<<"nhap gioi tinh: "; gets(GTinh);
	cout<<"nhap diem tb: "; cin>>DTB;
	fflush(stdin);
	cout<<"nhap dao duc: "; gets(DaoDuc);
}
void SinhVien::xuat(){
	cout<<"Ma sinh vien: "<<MSv<<endl;
	cout<<"Ho Ten: "<<HoTen<<endl;
	cout<<"Ngay Sinh: "<<ngSinh<<endl;
	cout<<"Thang sinh: "<<thSinh<<endl;
	cout<<"Nam sinh: "<<nSinh<<endl;
	cout<<"Gioi tinh: "<<GTinh<<endl;
	cout<<"Dien tb: "<<DTB<<endl;
	cout<<"Dao duc: "<<DaoDuc<<endl;
}


int main(){
	SinhVien SVDCao;
	SinhVien SVDThap;
	SVDCao.nhap();
	
	SVDThap.nhap();
	
	if (SVDCao.DTB<SVDThap.DTB){
		SinhVien temp;
		temp=SVDCao;
		SVDCao=SVDThap;
		SVDThap=temp;
	}
	cout<<"Sinh Vien diem cao: "<<endl;
	SVDCao.xuat();
	cout<<"Sinh Vien diem thap: "<<endl;
	SVDThap.xuat();
	return 0;
}
