#include<iostream>
#include<conio.h>
using namespace std;
void IfFunReturn(int a, int b)
{
    if(a > b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
}

int main()
{
    int a, b;
    cin>>a>>b;
    IfFunReturn(a, b);
    return 0;
}
