#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[10], b[10];
    cout<<"Enter your name";
    cin>>a;
    strcpy(b, a);
    cout<<"string first :- "<<a<<endl;
    cout<<"string sec :- "<<b<<endl;
    return 0;
}
