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
    char post[20],com[20];
    int sal;
public:
    void get_details()
    {
        person::get_details();
        cout<<"Enter Post: ";
        cin>>post;
        cout<<"Enter Company Name: ";
        cin>>com;
        cout<<"Enter Salary: ";
        cin>>sal;
    }
    void show_details()
    {
        person::show_details();
        cout<<"Post        :"<<post<<endl;
        cout<<"Company Name:"<<com<<endl;
        cout<<"Salary      :"<<sal<<endl;
    }
};
int main()
{
    Employee emp;
    cout<<"****** ENTER EMPLOYEE DETAILS ******"<<endl;
    emp.get_details();
    system("cls");
    cout<<"****** SHOW EMPLOYEE DETAILS ******"<<endl;
    emp.show_details();
    getch();
    return 0;
}
