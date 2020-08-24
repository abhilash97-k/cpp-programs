#include<iostream.h>
#include<conio.h>
class employee
{
 public:
 int id;
 char name[10];
 float salary;
 char des[10];
};

void main()
{
 employee e1;
 clrscr();
 cout<<"Enter employee details";
 cout<<"enter employee id";
 cin>>e1.id;
 cout<<"Enter employ salary";
 cin>>e1.salary;
 cout<<"Enter Designation";
 cin>>e1.des;
 cout<<endl<<"Employee Id :- "<<e1.id;
 cout<<endl<<"Salary :- "<<e1.salary;
 cout<<endl<<"Price :- "<<e1.des;
 getch();
}