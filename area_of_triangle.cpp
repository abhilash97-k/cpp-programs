#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    float a, b, c, p;
    cout<<"Enter the three sides of triangle"<<endl;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c > b)
    {
        cout<<"The sides are correct"<<endl;
        p = (a + b + c) / 2;
        cout<<"area of parameter is"<<p;
    }
    else
    {
        cout<<"sides are not correct";
    }

}
