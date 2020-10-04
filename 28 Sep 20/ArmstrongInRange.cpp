#include<iostream>
using namespace std;

int main()
{
    int n,r,sum,i;
    int s,e;

    cout<<"\n Enter Starting Number : ";
    cin>>s;

    cout<<"\n Enter Ending Number : ";
    cin>>e;

    cout<<"\n Armstrong Numbers in given range are : ";
    for(n=s;n<=e;n++)
    {
        i=n;
        sum = 0;
        while(i!=0)
        {
             r=i % 10;
             i=i/10;
             sum=sum+(r*r*r);
        }
        if(sum==n)
        {
             cout<<n<<endl;
        }
    }
    return 0;
}
