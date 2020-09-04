#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float mi, ho, sec;
    cout<<"Enter the time in minutes"<<endl;
    cin>>sec;
    ho = sec / 360;
    mi = sec / 60;
    cout<<"The Minutes are "<<mi<<endl;
    cout<<"The hours are "<<ho<<endl;
    cout<<"The seconds are "<<sec;
    return 0;
}
