#include <bits/stdc++.h>
using namespace std;
class Employee{
	private:
		int id;
		char name[30];
		int age;
		static int salary;
	public:
		void Input();
		void Output();
		
};
int Employee::salary = 10;
void Employee::Input(){
	cout<<"enter id: "; cin>>id;
	cout<<"enter name : "; fflush(stdin); gets(name);
	cout<<"enter age: "; cin>>age;
}
void Employee::Output(){
	cout<<"id : "<<id<<endl;
	cout<<"name : "<<name<<endl;
	cout<<"age : "<<age<<endl;
	cout<<"salary : "<<salary<<endl;
}
int main(){
	Employee em, em2;
	cout<<"nhap thong tin nhan vien 1: "<<endl;
	em.Input();
	cout<<"nhap thong tin nhan vien 2: "<<endl;
	em2.Input();
	cout<<"thong tin nhan vien 1: "<<endl;
	em.Output();
	cout<<"thong tin nhan vien 2: "<<endl;
	em2.Output();
	return 0;
}
