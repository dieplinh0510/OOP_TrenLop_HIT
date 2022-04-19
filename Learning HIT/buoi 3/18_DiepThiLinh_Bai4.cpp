#include <bits/stdc++.h>
using namespace std;
class SCHOOL{
	private:
		char name[30];
		int date;
	public:
		friend class FACULTY;
};
class FACULTY{
	private:
		char name[30];
		int date;
		SCHOOL x;
	public:
		void Input();
		void Output();
		
};
class STUDENT{
	private:
		FACULTY y;
		int classs;
		int score;
	public:
		void Input();
		void Output();
		STUDENT();
};

void FACULTY::Input(){
	cout<<"name: "; fflush(stdin); gets(name);
	cout<<"date: "; cin>>date;
	cout<<"school name: "; fflush(stdin); gets(x.name);
	cout<<"school date: "; cin>>x.date;
}
void FACULTY::Output(){
	cout<<"name: "<<name<<endl;
	cout<<"date: "<<date<<endl;
	cout<<"school name: "<<x.name<<endl;
	cout<<"school date: "<<x.date<<endl;
}

STUDENT::STUDENT(){
	
}
void STUDENT::Input(){
	y.Input();
	cout<<"class: "; cin>>classs;
	cout<<"score: "; cin>>score;
}
void STUDENT::Output(){
	y.Output();
	cout<<"class: "<<classs<<endl;
	cout<<"score: "<<score<<endl;
}
int main(){
	int n;
	cin>>n;
	STUDENT *a= new STUDENT [n];
	for (int i=0; i<n; i++){
		cout<<"nhap thong tin sinh vien thu :"<<i+1<<endl;
		a[i].Input();
	}
	for (int i=0; i<n; i++){
		cout<<"thong tin sinh vien thu : "<<i+1<<endl;
		a[i].Output();
	}
	return 0;
}
