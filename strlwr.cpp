#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char name[10];
    cout<<"Enter Your name"<<endl;
    cin>>name;
    cout<<"The string in lower case"<<endl;
    strlwr(name);
    cout<<name;
    return 0;
}
