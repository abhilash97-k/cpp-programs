#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n[5], i;
    cout<<"Enter 5 numbers";
    for(i=0;i<=4;i++)
    {
        cin>>n[i];

    }
    cout<<"Array is :- "<<endl;
    for(i=0;i<=4;i++)
    {
        cout<<n[i]<<",";
    }
    int n_c = 0;
    for(i=0;i<=4;i++)
    {
        if(n[i]<0)
            n_c++;
    }
    int p_c=0;
    for(i=0;i<=4;i++)
    {
        if(n[i]>0)
            p_c++;
    }
    cout<<endl;
    cout<<"negative numbers are :- "<<n_c<<endl;
    cout<<"Positive numbers are :- "<<p_c<<endl;
    return 0;
}
