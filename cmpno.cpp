#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter the three intigers"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<" "<<a<<" is greater than both the numbers"<<endl;
    }
    else if(b>a&&b>c)
    {
        cout<<" "<<b<<" is greater than both the numbers "<<endl;
    }
    else if(c>a&&c>b)
    {
        cout<<" "<<c<<" is greater than both the numbers "<<endl;
    }
    else
    {
        cout<<"numbers are equal";
    }
    return 0;
}
