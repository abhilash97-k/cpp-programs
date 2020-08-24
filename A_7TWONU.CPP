/*write a c++ program to print on screen the output of adding, subtracting,
multyplying and dividing of two numbers which will enterd by user*/
#include<iostream.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 int a, b, add, sub, mul;
 float div;
 clrscr();
 cout<<"Enter the two numbers"<<endl;
 cin>>a>>b;
 add = a + b;
 sub = a - b;
 mul = a * b;
 div = a / b;
 cout<<a<<" + "<<b<<" = "<<add<<endl;
 cout<<a<<" - "<<b<<" = "<<sub<<endl;
 cout<<a<<" * "<<b<<" = "<<mul<<endl;
 cout<<a<<" / "<<b<<" = "<<div<<endl;
 getch();
}
