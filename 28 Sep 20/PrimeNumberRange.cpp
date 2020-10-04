#include<iostream>
using namespace std;

int main()
{
    int n,i,ctr,st,en;

    cout<<"Enter the starting number ";
    cin>>st;
    cout<<"Enter the ending number in the range";
    cin>>en;
    for(n=st;n<=en;n++)
    {
        ctr=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                ctr++;
                break;
            }
        }
        if(ctr==0 && n!= 1)
        {
            cout<<n<<endl;
        }
    }
    return 0;
}
