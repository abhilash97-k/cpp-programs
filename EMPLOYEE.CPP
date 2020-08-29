#include<iostream.h>
#include<conio.h>
#include<string.h>
class Person
{
 char name[10];
 char add[50];
 public:
  void getdata(char n[10], char a[50])
  {
   strcpy(name, n);
   strcpy(add, a);
  }
  void showdata()
  {
   cout<<"Name :- "<<name;
   cout<<"Address :- "<<add;
  }
};

class employee : public Person
{
 int empno;
 char des[50];
 double sal;
 public:
 void getempdata(int e, char d[50], double s)
 {
  empno = e;
  strcpy(des, d);
  sal = s;
 }
 void printempdata()
 {
  cout<<"\nEmployee id :- "<<empno;
  cout<<"\nDesignation :- "<<des;
  cout<<"\nSalary :- "<<sal;
 }
};

class partemp : public employee
{
 double work_hours;
 int pid;
 double sal;
 public:
 void ptdata(double wh, int pd, double sa)
 {
  work_hours = wh;
  pid = pd;
  sal = sa;
 }
 void printdata()
 {
  cout<<"\n Working Hours :- "<<work_hours;
  cout<<"\nId :- "<<pid;
  cout<<"\nSalary :- "<<sal;
 }
};

void main()
{
 char name[10];
 char add[50];
 char emptype[50];
 clrscr();
 cout<<"Enter name and address"<<endl;
 cout<<"\nEnter a type of EMPLOYEE a regular or partime";
 cin>>name>>add>>emptype;
 int ans = strcmp(emptype,"regular");
 if(ans == 0)
 {
  employee e;
  e.getempdata(23, "manager", 56000);
  e.printempdata();
 }
 ans = strcmp(emptype, "parttime");
 if (ans == 0)
 {
  partemp p;
  p.ptdata(67, 56, 6000);
  p.printdata();
 }
 getch();
}