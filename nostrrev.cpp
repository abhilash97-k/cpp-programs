#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char name[10];
    int i, j;
    cout<<"enter your name";
    cin>>name;
    for(i=0;name[i]!= '\0'; i++)
    {
        i=i+1;
    }
    j=i-1;
    cout<<"String length is :- "<<i;
    for(i=j;i>=0;i--)
    {
        cout<<"    "<<name[i];
    }
    return 0;
}
