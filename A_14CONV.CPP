/*Write a c++ program to convert from celsius degrees to kelvin and Farhenite*/
#include<iostream.h>
#include<conio.h>
void main()
{
 double cel, fer, kel;
 clrscr();
 cout<<"Enter the degree celsius"<<endl;
 cin>>cel;
 fer = (cel * 9 / 5) + 32;
 kel = cel + 273.15;
 cout<<"Kelvin = "<<kel<<endl;
 cout<<"Fahrenheit = "<<fer<<endl;
 getch();

}