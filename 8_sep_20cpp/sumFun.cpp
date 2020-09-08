#include<iostream>
#include<conio.h>
using namespace std;
void arrsum(int a[])
{
    int sum = 0, i;
    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    cout<<endl;
    cout<<sum;

}
int main()
{
    int i,a[5];
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    arrsum(a);
}
