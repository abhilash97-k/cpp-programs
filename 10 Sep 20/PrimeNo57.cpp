#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, j;
    for(i=2;i<=200;i++)
    {
        int flag = 0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
        }
        if(flag ==0)
        cout<<i<<endl;
    }
    return 0;
}
