#include<conio.h>
#include<iostream.h>
class book
{
 public:
  int bookid;
  char title[10];
  char author[10];
  float price;
};

void main()
{
 book b1;
 clrscr();
 cout<<"Enter book details"<<endl;
 cout<<"Enter book id"<<endl;
 cin>>b1.bookid;
 cout<<"Enter book name"<<endl;
 cin>>b1.title;
 cout<<"Enter the author name"<<endl;
 cin>>b1.author;
 cout<<"Enter the Price"<<endl;
 cin>>b1.price;
 cout<<endl<<"Book details are :"<<endl;
 cout<<endl<<"bookid : "<<b1.bookid<<endl;
 cout<<endl<<"title : "<<b1.title<<endl;
 cout<<endl<<"author : "<<b1.author;
 cout<<endl<<"price : "<<b1.price<<endl;
 getch();
}