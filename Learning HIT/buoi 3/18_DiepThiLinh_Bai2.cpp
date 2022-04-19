#include <bits/stdc++.h>
using namespace std;
class NSX{
	private:
		int id;
		char name[30];
		char address[30];
	public:
		void Input();
		void Output();
};
class HANG{
	private:
		int id;
		char name[30];
		NSX x;
	public:
		void Input();
		void Output();
};
void NSX::Input(){
	cout<<"enter id     : "; cin>>id;
	cout<<"enter name   : "; fflush(stdin); gets(name);
	cout<<"enter address: "; fflush(stdin); gets(address);
	
}
void NSX::Output(){
	cout<<"id NSX: "<<id<<endl;
	cout<<"name NSX: "<<name<<endl;
	cout<<"address NSX: "<<address<<endl;
}
void HANG::Input(){
	cout<<"enter id: "; cin>>id;
	cout<<"enter name: "; fflush(stdin); gets(name);
	cout<<"enter infor NSX"<<endl;
	x.Input();
}
void HANG::Output(){
	cout<<"id: "<<id<<endl;
	cout<<"name: "<<name<<endl;
	x.Output();
}
int main(){
	int n; cin>>n;
	HANG *a = new HANG[n];
	for (int i=0; i<n; i++){
		cout<<"enter infor item "<<i+1<<endl;
		a[i].Input();
	}
	for (int i=0; i<n; i++){
		cout<<"infor item "<<i+1<<endl;
		a[i].Output();
	}
	return 0;
}
