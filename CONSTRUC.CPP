#include<iostream.h>
#include<conio.h>
#include<string.h>
class customer
{
 int id;
 char name[10];
 char add[50];
 int mob_no;
 public:
  customer()
  {
   id = 123;
   strcpy(name, "abhi");
  }
  void display()
  {
   cout<<endl<<"id :- "<<id;
   cout<<endl<<"customer : - "<<name;
  }
};

void main()
{
 customer c1;
 clrscr();
 c1.display();
 getch();
}