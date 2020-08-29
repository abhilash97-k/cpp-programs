#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
 char name[10];
 int roll_no;
 int marks;
 public:
  void getData(char a[10], int b, int c)
  {
   strcpy(name, a);
   roll_no = b;
   marks = c;
  }
  void printData()
  {
   cout<<endl<<"Student Details"<<endl;
   cout<<endl<<"Name :- "<<name<<endl;
   cout<<endl<<"Roll no :- "<<roll_no<<endl;
   cout<<endl<<"marks :- "<<marks<<endl;
  }
};

void main()
{
 student s1;
 char sn[10];
 int rn;
 int ma;
 clrscr();
 cout<<"Enter book details"<<endl;
 cout<<"Enter the name "<<endl;
 cin>>sn;
 cout<<"Enter roll no"<<endl;
 cin>>rn;
 cout<<"enter marks"<<endl;
 cin>>ma;
 s1.getData(sn,rn,ma);
 s1.printData();
 getch();


}