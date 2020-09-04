#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char name[8];
    cout<<"enter the name";
    cin>>name;
    strrev(name);
    cout<<"Revers string name is :- "<<name;
    return 0;
}
