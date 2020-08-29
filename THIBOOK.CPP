#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
class student
{
 char name[10];
 int m1, m2, m3, total;
 float per;
 public :
 void calresult(char a[10], int b, int c, int d)
 {
  strcpy(name, a);
  total = b + c + d;
  per = (float) total/300.0f * 100.0f;
 }
 void printResult()
 {
  cout<<"student name"<<name<<endl;
  cout<<"total marks"<<total<<endl;
  cout<<"Percentage"<<per<<endl;
 }
};

void main()
{
 student s1;
 char n[10];
 int m1, m2, m3;
// float p;
 clrscr();
 cout<<"Enter student Details"<<endl;
 cout<<"Enter the name of student"<<endl;
 cin>>n;
 cout<<"Enter sub 1 marks"<<endl;
 cin>>m1;
 cout<<"Enter sub 2 marks"<<endl;
 cin>>m2;
 cout<<"Enter sub 3 marks"<<endl;
 cin>>m3;
 s1.calresult(n, m1, m2, m3);
 s1.printResult();
 getch();
}