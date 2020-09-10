#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n<500)
    {
        while(n!=0)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }
    }
    else
    {
        cout<<"Limit is only 500"<<endl;
    }
    cout<<sum;
    return 0;
}
