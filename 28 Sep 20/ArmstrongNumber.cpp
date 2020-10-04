#include<iostream>
using namespace std;

int main()
{
    int n,r,sum=0,i;
    cout<<"\n Enter The Number : ";
    cin>>n;
    for(i=n;n!=0;n=n/10)
    {
         r=n%10;
         sum=sum+(r*r*r);
    }
    if(sum==i)
    {
        cout<<" is an Armstrong number ";
    }
    else
    {
        cout<<" not an Armstrong number ";
    }
    return 0;
}
