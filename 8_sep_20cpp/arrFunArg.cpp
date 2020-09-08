#include<iostream>
#include<conio.h>
using namespace std;
arrFunArg(int a)
{
    int n[5], i;
    for(i=0;i<5;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<n[i];
    }
}

int main()
{
    int a;
    arrFunArg(a);
    return 0;
}
