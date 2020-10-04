#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, m, sum = 0, mi, mx;
    cout<<"Starting number is "<<endl;
    cin>>mi;
    cout<<"Ending number is "<<endl;
    cin>>mx;
    for(n=mi;n=mx;n++)
    {

    for(i=1;i<n;i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        cout<<"the perfect number is"<<endl<<n;
    }
    }
    return 0;
}
