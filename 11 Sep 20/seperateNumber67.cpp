#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long int num, temp;
    int arr[7];
    cout<<"Enter 7 digit number : "<<endl;
    cin>>num;
    if(num<10000000 )
    {
        if(num>999999 || num == 0000000)
            cout<<num<<endl;
    }
    else                                            //123456.7
    {
        cout<<"You enter incorrect number";
    }
    for(int i=0;i<7;i++)
    {
        temp = num % 10;
        num = num / 10;
        for(int a = 0;a<7;a++)
        {
            arr[i] = temp;
            continue;
        }
    }
    for(int i=6;i>=0;i--)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
