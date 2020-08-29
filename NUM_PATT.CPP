#include<iostream.h>
#include<conio.h>
void main()
{
 int row, col, num;
 clrscr();
 cin>>num;
 for(row=num;row>=0;row--)
 {
  for(col=1;col<=row;col++){
  cout<<"\t"<<col;
  }
  cout<<endl;
 }
 //cout<<endl;
 getch();

}