#include <bits/stdc++.h>
using namespace std;
class PHIEU;
class SP{
	private:
		char ma[10];
		char ten[30];
		int soL;
		int gia;
	public:
		void Nhap();
		void Xuat();
		friend class PHIEU;	
		friend void Sort(PHIEU a);
};

class NCC{
	private:
		char ma[10];
		char ten[30];
		char diaChi[50];
		char dt[15];
	public:
		void Nhap();
		void Xuat();
};

class PHIEU{
	private:
		char ma[15];
		char ngay[20];
		NCC ncc;
		SP *sp;
		int n;
	public:
		void Nhap();
		void Xuat();
		friend void Sort(PHIEU a);	
		friend void Insert(PHIEU &a, SP x, int pos);
};

void SP::Nhap(){
	cout<<"nhap ma sp: "; fflush(stdin); gets(ma);
	cout<<"nhap ten sp: "; fflush(stdin); gets(ten);
	cout<<"nhap so luong: "; cin>>soL;
	cout<<"nhap don gia sp: "; cin>>gia;
}

void SP::Xuat(){
	cout<<left<<setw(15)<<ma<<setw(30)<<ten<<setw(15)<<soL<<setw(15)<<gia<<setw(15)<<gia*soL<<endl;
}

void NCC::Nhap(){
	cout<<"nhap ma ncc : "; fflush(stdin); gets(ma);
	cout<<"nhap ten ncc : "; fflush(stdin); gets(ten);
	cout<<"nhap dia chi ncc : "; fflush(stdin); gets(diaChi);
	cout<<"nhap std ncc : "; fflush(stdin);gets(dt);
}

void NCC::Xuat(){
	cout<<"\tma ncc : "<<left<<setw(30)<<ma<<"ten ncc: "<<ten<<endl;
    cout<<"\tdia chi: "<<left<<setw(30)<<diaChi<<"std ncc : "<<dt<<endl;
}

void PHIEU::Nhap(){
	cout<<"nhap ma phieu: "; fflush(stdin); gets(ma);
	cout<<"nhap ngay lap: "; fflush(stdin); gets(ngay);
	ncc.Nhap();
	cout<<"nhap so luong sp : "; cin>>n;
	sp= new SP[n];
	for (int i=0; i<n; i++){
		cout<<"nhap sp thu: "<<i+1<<endl;
		sp[i].Nhap();
	}
}

void PHIEU::Xuat(){
	cout<<"\tDai hoc Victory"<<endl;
    cout<<"\t\t\t\tPHIEU NHAP VAN PHONG PHAM"<<endl;
    cout<<left<<setw(15)<<"\tma phieu :"<<ma<<ngay<<endl;
    ncc.Xuat();
    cout<<left<<setw(15)<<"ma sp"<<setw(30)<<"ten sp"<<setw(15)<<"so luong"<<setw(15)<<"gia"<<setw(15)<<"thanh tien"<<endl;
    int s=0;
    for (int i=0; i<n; i++)
    {
        s+=sp[i].gia*sp[i].soL;
        sp[i].Xuat();
    }
    cout<<"\ttong tien: "<<left<<setw(60)<<s<<endl;
    cout<<left<<setw(30)<<"Hieu truong"<<setw(30)<<"Phong tai chinh"<<setw(30)<<"Nguoi lap";
}

void Sort(PHIEU a){
	for (int i=0; i<a.n-1; i++){
		for (int j=i+1; j<a.n; j++){
			if ((a.sp[i].soL*a.sp[i].gia) < (a.sp[j].soL*a.sp[j].gia)) {
				SP temp=a.sp[i];
				a.sp[i]=a.sp[j];
				a.sp[j]=temp;
			}
		}
	}
}

void Insert(PHIEU &a, SP x, int pos){
	for (int i=a.n; i>=pos; i--){
		a.sp[i]=a.sp[i-1];
	}
	a.n++;
	a.sp[pos-1]=x;
}
int main(){
	PHIEU phieu;
	phieu.Nhap();
	cout<<endl<<"phieu vua nhap la: "<<endl;
	phieu.Xuat();
	
	cout<<endl<<"phieu da sap xep: "<<endl;
	Sort(phieu);
	phieu.Xuat();
	
	SP x;
	cout<<endl<<"nhap them sp : "<<endl;
	x.Nhap();
	Insert(phieu, x, 1);
	cout<<endl<<"phieu da them: "<<endl;
	phieu.Xuat();
	
	return 0;
}
