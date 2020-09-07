#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n[5], i, a = 0;
    cout<<"Enter the 5 values"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>n[i];
    }
    cout<<"Array is :"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<endl;
    }
    for(i=0;i<5;i++)
    {
        if(n[i] % 2 == 1){
            a = a + n[i];
        }
    }
    cout<<"Sum of odd value is"<<a;
    return 0;
}
