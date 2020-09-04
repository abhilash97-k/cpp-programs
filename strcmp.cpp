#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char n1[10], n2[10];
    cout<<"Enter your name";
    cin>>n1;
    cout<<"Enter another person name";
    cin>>n2;
    int i = strcmp(n2, n1);
    if (i == 0)
    {
        cout<<"both are same"<<endl;
    }
    else
    {
        cout<<"Both are diffrent";
    }
    return 0;
}
