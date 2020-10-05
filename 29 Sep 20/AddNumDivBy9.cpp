#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, sum=0;
    for(i=100;i<200;i++)
    {
        if(i%9==0)
        {
            cout<<i<<endl;
            sum = sum + i;
        }
    }
    cout<<"Sum of numbers which are divisble by 9"<<sum;
    return 0;
}
