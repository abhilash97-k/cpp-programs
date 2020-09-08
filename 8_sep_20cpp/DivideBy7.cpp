#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n, m;
    cout<<"Enter the range";
    cin>>n>>m;
    for(i = n;i <= m;i++)
    {
        if(i % 7 == 2 || i % 7 == 3)
        {
            cout<<i<<endl;
        }
    }
}
