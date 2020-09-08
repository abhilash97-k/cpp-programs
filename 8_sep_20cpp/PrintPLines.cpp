#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p, q, i, j;
    cout<<"Enter the number"<<endl;
    cin>>p;
    cin>>q;
    for(i=0;i<p;i++)
    {
        for(j=1;j<=q;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
