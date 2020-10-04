#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, sum;
    cin>>n;
    for(i=1;i<n;i++)
    {
        sum = sum + n;
        n = (n * 10) + 1;
    }
    cout<<sum;
}
