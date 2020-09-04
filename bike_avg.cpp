#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float km, lt, avg;
    cout<<"Enter the amount of petrol in liters"<<endl;
    cin>>lt;
    cout<<"Enter the traveling distance in km"<<endl;
    cin>>km;
    avg = km / lt;
    cout<<"The bike average is "<<std::setprecision(2)<<avg<<endl;
    return 0;
}
