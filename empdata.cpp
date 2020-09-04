#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char id[10];
    float ho,am, sal;
    cout<<"Enter the ID of Employee"<<endl;
    cin>>id;
    cout<<"Enter number of hours he work this month";
    cin>>ho;
    cout<<"Enter the amount for per hour work";
    cin>>am;
    sal= ho * am;
    cout<<endl<<"Id :- "<<id<<endl;
    cout<<endl<<"Salary :- "<<sal;
    return 0;
}
