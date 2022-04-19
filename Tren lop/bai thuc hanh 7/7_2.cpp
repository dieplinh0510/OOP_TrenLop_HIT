#include <bits/stdc++.h>
using namespace std;
class SCHOOL
{
private:
    char name[20];
    char date[20];
public:
    friend class FACULTY;
    friend class STUDENT;
};
class FACULTY
{
private:
    char name[20];
    char date[20];
    SCHOOL x;
public:
    void input();
    void output();
    friend class STUDENT;

};

class PERSON
{
protected:
    char name[20];
    char birth[20];
    char address[20];
public:
    void input();
    void output();
    PERSON();
};

class STUDENT :protected PERSON
{
private:
    FACULTY y;
    char clas[20];
    float score;
public:
    void input();
    void output();
    STUDENT();

};
void FACULTY::input()
{
    cout<<"Nhap name faculty: "; fflush(stdin); gets(name);
    cout<<"Nhap date faculty: "; fflush(stdin); gets(date);
    cout<<"Nhap name school: "; fflush(stdin); gets(x.name);
    cout<<"Nhap date school: "; fflush(stdin); gets(x.date);
}
void FACULTY::output()
{
    cout<<setw(30)<<name<<setw(30)<<date<<endl;
    cout<<setw(30)<<x.name<<setw(30)<<x.date<<endl;
}
PERSON::PERSON()
{
    strcpy(name, "");
    strcpy(birth, "");
    strcpy(address, "");
}
void PERSON::input()
{
    cout<<"Nhap name: "; fflush(stdin); gets(name);
    cout<<"Nhap birth: "; fflush(stdin); gets(birth);
    cout<<"Nhap address: "; fflush(stdin); gets(address);
}
void PERSON::output()
{
    cout<<setw(20)<<name<<setw(20)<<birth<<setw(20)<<address;
}

STUDENT::STUDENT()
{
    strcpy(y.name,"");
    strcpy(y.date, "");
    strcpy(y.x.name, "");
    strcpy(y.x.date, "");
    strcpy(clas, "");
    score = 0;
}
void STUDENT::input()
{
    PERSON::input();
    y.input();
    cout<<"Nhap class: "; fflush(stdin); gets(clas);
    cout<<"Nhap score: "; cin>>score;
}
void STUDENT::output()
{
    PERSON::output();
    y.output();
    cout<<setw(20)<<clas<<setw(20)<<score<<endl;
}
int main()
{
    STUDENT student;
    student.input();
    student.output();
    return 0;
}
