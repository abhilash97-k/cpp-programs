#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,sum=0,t;

    cout<<"Enter The Number "<<endl;
    cin>>n;

    for(t=n;n!=0;n=n/10)
    {
        r=n % 10;
        sum=sum*10+r;
    }
    cout<<"Reverse Order is :"<<endl<<sum;
    return 0;
}
