/*Write a c+ program that takes a number as input and then display a
 rectangle of 3 columns wide and 5 rows tall using that digit*/
#include<conio.h>
#include<iostream.h>
void main()
{
 int n, i, j;
 clrscr();
 cout<<"Enter the number";
 cin>>n;
 for(i=0;i<5;i++)
 {
  for(j = 0;j<3;j++)
  {
   cout<<" "<<n;
  }
  cout<<"\n";
 }
 getch();
}