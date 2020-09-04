#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char na[10], sr[10];
    cout<<"Enter your name"<<endl;
    cin>>na;
    cin>>sr;
    strcat(na, sr);
    cout<<na;
    return 0;
}
