/*Write a c++ program that takes four numbers as input to calculate and print
average*/
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
 int a, b, c, d, e;
 float ave;
 clrscr();
 cout<<"Enter the four numbers"<<endl;
 cin>>a>>b>>c>>d;
 e = a + b + c + d;
 ave = e / 4;
 cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
 cout<<"--------------- = "<<ave<<endl;
 cout<<"       4        "<<endl;
 getch();
}
