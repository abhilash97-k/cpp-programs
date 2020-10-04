#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n , i, s, sum = 0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s = i * i;
        sum = sum + s;
    }
    cout<<sum;
}
