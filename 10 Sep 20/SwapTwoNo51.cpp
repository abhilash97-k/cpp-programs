#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Variables before swaping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Variables after swaping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;

}
