#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class person
{
protected:
    char name[20],gen[10];
    int age;
public:
    void get_details()
    {
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Gender: ";
        cin>>gen;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void show_details()
    {
        cout<<"Name        :"<<name<<endl;
        cout<<"Gender      :"<<gen<<endl;
        cout<<"Age         :"<<age<<endl;
    }
};
class Employee:public person
{
    char add[20],com[20];
    int sal;
public:
    void get_details()
    {
        person::get_details();
        cout<<"Enter Address: ";
        cin>>add;
        cout<<"Enter Company Name: ";
        cin>>com;
        cout<<"Enter Salary: ";
        cin>>sal;
    }
    void show_details()
    {
        person::show_details();
        cout<<"Address        :"<<add<<endl;
        cout<<"Company Name:"<<com<<endl;
        cout<<"Salary      :"<<sal<<endl;
    }
};
class Developer:public Employee
{
    char pl[20];
    int exp;
public:
    void get_details()
    {
        Employee::get_details();
        cout<<"Enter the working language: ";
        cin>>pl;
        cout<<"Enter the experience(in years): ";
        cin>>exp;
    }
    void show_details()
    {
        Employee::show_details();
        cout<<"Programming Language: "<<pl<<endl;
        cout<<"Experience: "<<exp<<endl;
    }
};
int main()
{
    Developer dev;
    cout<<"****** ENTER DEVELOPER DETAILS ******"<<endl;
    dev.get_details();
    system("cls");
    cout<<"****** SHOW DEVELOPER DETAILS ******"<<endl;
    dev.show_details();
    getch();
    return 0;
}

