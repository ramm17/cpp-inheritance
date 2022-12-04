#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Area
{
public:
    float get_area(float l,float b)
    {
        return (l*b);
    }
};
class Perimeter
{
public:
    float get_peri(float l,float b)
    {
        return 2*(l+b);
    }
};
class Rectangle:public Area,public Perimeter
{
    float len,bre;
public:
    void input()
    {
        cout<<"Enter the value of length: ";
        cin>>len;
        cout<<"Enter the value of breadth: ";
        cin>>bre;
    }
    void output()
    {
        cout<<endl<<"Area of Rectangle     : "<<get_area(len,bre);
        cout<<endl<<"Perimeter of Rectangle :"<<get_peri(len,bre);
    }
};
int main()
{
    Rectangle rec;
    rec.input();
    rec.output();
    getch();
    return 0;
}
