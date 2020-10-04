#include<iostream>
using namespace std;
int main()
{
    int n,i,ctr = 0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            ctr++;
            break;
        }
    }
    if(ctr==0 && n!=1)
    {
        cout<<" prime number ";
    }
    else
    {
        cout<<" not prime number ";
    }
    return 0;
}
