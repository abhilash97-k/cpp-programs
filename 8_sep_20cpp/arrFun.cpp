#include<iostream>
#include<conio.h>
using namespace std;
void arrFun()
{
    int n[5], i;
    for(i = 0;i<=4;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<=4;i++)
    {
        cout<<n[i];
    }
}

int main()
{
    arrFun();
    return 0;
}
