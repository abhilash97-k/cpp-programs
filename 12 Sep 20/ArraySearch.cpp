#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[5], i, s, ctr = 0;
    cout<<"Enter the name";
    for(i=0;i<5;i++)
    {
       cin>>arr[i];
    }
    cout<<"Enter the element for search"<<endl;
    cin>>s;
    for(i=0;i<5;i++)
    {
        if(arr[i] == s)
        {
            ctr = 1;
            break;

        }
    }
    if(ctr == 1)
    {
        cout<<"Elment is present";
    }
    else
        cout<<"Element not present";
    return 0;
}
