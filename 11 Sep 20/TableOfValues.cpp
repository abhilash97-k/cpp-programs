#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[5][4];
    arr[0][0] = 1;
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=3;j++)
        {
            arr[i][j] = arr[i][0] + j * 2;
        }
        arr[i+1][0] = arr[i][1]+1;
    }
    for(int i =0;i<=4;i++)
    {
        for(int j = 0;j<=3;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
