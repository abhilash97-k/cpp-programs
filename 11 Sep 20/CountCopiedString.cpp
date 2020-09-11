#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char ch1[100], ch2[100];
    int i;
    cin>>ch1;
    cout<<ch1;
    for(i=0;ch1[i]!='\0';i++)
    {
        ch2[i] = ch1[i];
        ch2[i] = '\0';
        cout<<endl;
    }
    cout<<"string is "<<ch1[100];
    cout<<"Number of char are "<<i;
    return 0;
}
