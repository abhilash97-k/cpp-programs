#include<iostream.h>
#include<conio.h>
#include<string.h>
class book
{
 int bookid;
 char title[10];
 char author[10];
 float price;

 public:
  void getData(int a, char b[10], char c[10], float d)
  {
   bookid = a;
   strcpy(title, b);
   strcpy(author, c);
   price = d;
  }

 void printData()
 {
  cout<<endl<<"book Details"<<endl;
  cout<<endl<<"book id :- "<<bookid<<endl;
  cout<<endl<<"title :- "<<title<<endl;
  cout<<endl<<"author :- "<<author<<endl;
  cout<<endl<<"Price :- "<<price<<endl;
 }
};

void main()
{
 book b1;
 int bid;
 char tit[10];
 char aut[10];
 float pri;
 clrscr();
 cout<<"Enter book details"<<endl;
 cout<<"enter book id"<<endl;
 cin>>bid;
 cout<<"Enter title name"<<endl;
 cin>>tit;
 cout<<"Enter author name"<<endl;
 cin>>aut;
 cout<<"Enter the price";
 cin>>pri;
 getch();
 b1.getData(bid,tit,aut,pri);
 b1.printData();
 getch();
}