#include<iostream.h>
#include<conio.h>
#include<string.h>
class customer
{
 int id;
 char name[10];
 char addr[10];
 int mob_no;

 public:
 customer(int a, char b[10], char c[10], int d)
 {
  id = a;
  strcpy(name, b);
  strcpy(addr, c);
  mob_no = d;
 }
 void display()
 {
  cout<<endl<<"id :- "<<id<<endl;
  cout<<endl<<"name :- "<<name<<endl;
  cout<<endl<<"address :- "<<addr<<endl;
  cout<<endl<<"mobile no. :- "<<mob_no<<endl;
 }
 };
 void main()
 {
 clrscr();
 customer c2(111, "rajesh", "jhwda", 980);
 c2.display();
 getch();
 }