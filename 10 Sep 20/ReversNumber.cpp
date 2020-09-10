#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[5], i;
    cout<<"Enter the numbers"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<",";
    }

    cout<<endl;

    for(i=0;i<5/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[5 - i -1];
        arr[5-i-1] = temp;
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}
