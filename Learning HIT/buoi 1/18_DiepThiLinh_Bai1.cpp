#include <iostream>
#include <math.h>
using namespace std;
class HinhTron {
	public:
		float r;
		float ChuVi();
		float DienTich();
//		float ChuVi(){
//			return r*2*M_PI;
//		}
//		float DienTich(){
//			return r*r*M_PI;
//		}
};
float HinhTron::ChuVi(){
	return r*2*M_PI;
}
float HinhTron::DienTich(){
	return r*r*M_PI;
}

int main(){
	HinhTron A;
	cout<<"nhap ban kinh: "; cin>>A.r;
	cout<<"chu vi: "<<A.ChuVi()<<endl;
	cout<<"dien tich: "<<A.DienTich();
	return 0;
}
