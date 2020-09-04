#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    char name[10];
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<" "<<name<<endl;
    strupr(name);
    cout<<name<<endl;
    return 0;
}
