#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, r, sum = 0;
    cin>>n;
    for(i = 1;i <= (n-1);i++)
    {
        r = n % i;
        if(r == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        cout<<"Number is perfect number";
    }
    else
        cout<<"It is not perfect number";
}
