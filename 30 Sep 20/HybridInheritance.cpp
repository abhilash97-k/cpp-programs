#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    char name[50];
    char add[50];
    long pno;
    char city[50];

     void stu()
    {
        cout<<"Enter student id"<<endl;
        cin>>id;
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter address "<<endl;
        cin>>add;
        cout<<"Enter phone number"<<endl;
        cin>>pno;
        cout<<"Enter city"<<endl;
        cin>>city;
    }
};

class exam : public student
{
public:
    float p1, p2;
    void ex()
    {
    cout<<"enter marks of student"<<endl;
    cin>>p1;
    cin>>p2;
    }
};

class sport
{
    public:
    float sp;
    void sm()
    {
        cout<<"Enter sport marks"<<endl;
        cin>>sp;
    }
};

class result : public exam , public sport
{
public:
    float r;
    void addMarks()
    {
      r = sp + p1 + p2;
       cout<<r;
    }
};

int main()
{
    result s;
    s.stu();
    s.ex();
    s.sm();
    s.addMarks();
    return 0;
}
