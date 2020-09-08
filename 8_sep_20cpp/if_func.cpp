#include<iostream>
#include<conio.h>
using namespace std;
void if_fun()
{
    int a;
    cout<<"Enter your number"<<endl;
    cin>>a;
    if(2 % a == 0)
    {
        cout<<"It is even"<<endl;
    }
    else
    {
        cout<<"It is odd"<<endl;
    }
}

int main()
{
    if_fun();
    return 0;
}
