#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter the two values"<<endl;
    cin>>n>>m;
    if(m%n==0)
    {
        cout<<"first number is a multiple of second number";
    }
    else
        cout<<"first number is not a multiple of second number";
    return 0;
}
