/*write a c++ program that takes number as a input and print its
multiplication table*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 int a, i, tab;
 clrscr();
 cout<<"Enter the number"<<endl;
 cin>>a;
 for(i = 1;i <= 10; i++)
 {
  tab = a * i;
  cout<<a <<" * "<<i<<" = "<<tab<<endl;
 }
 getch();
}