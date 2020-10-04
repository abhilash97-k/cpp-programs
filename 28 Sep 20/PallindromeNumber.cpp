#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,sum=0,t;
    cout<<"enter number "<<endl;
    cin>>n;

    for(t=n;n!=0;n=n/10)
    {
        r=n % 10;
        sum=sum*10+r;
    }
    if(t==sum)
    {
        cout<<"Number is Pallindrome";
    }
    else
    {
        cout<<"Number is  not Pallindrome";
    }
    return 0;

}
