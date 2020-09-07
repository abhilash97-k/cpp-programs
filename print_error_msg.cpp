#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(num<0 && num>80)
    {
        cout<<"Number is not in range";
    }
    else
    {
        cout<<"Number is correct";
    }
    return 0;
}
