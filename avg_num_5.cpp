#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n[5], i, sum = 0 , c=0;
    cout<<"Enter the numbers";
    for(i=0;i<5;i++)
    {
        cin>>n[i];
    }
    cout<<"Array is :- "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<",";
    }
    cout<<endl;
   for(i=0;i<5;i++)
    {
        if(n[i] > 0)
        {
            sum = sum + n[i];
            c++;
        }
    }
    cout<<"Positive numbers are :- "<<c<<endl;
    float avg = sum / c;
    cout<<"sUM IS :- "<<sum<<endl;
    cout<<"Average is :- "<<avg;
    return 0;
}

