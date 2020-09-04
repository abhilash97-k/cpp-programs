#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float d, m, y;
    cout<<"Enter the number of days"<<endl;
    cin>>d;
    m = d / 30;
    y = d / 365;
    cout<<"Days :- "<<d<<endl;
    cout<<"Month :- "<<m<<endl;
    cout<<"Year :- "<<y<<endl;
    return 0;
}
