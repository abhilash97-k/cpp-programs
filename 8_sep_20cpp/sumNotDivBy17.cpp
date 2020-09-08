#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n , m, sum = 0, i;
    cout<<"Enter the range"<<endl;
    cin>>n>>m;
    for(i=n;i<=m;i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    cout<<sum;
    return 0;
}
