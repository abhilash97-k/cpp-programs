#include<iostream>
#include<conio.h>
using namespace std;
void forLoopArg(int a)
{
    int n, i, sq;
    cin>>n;
    for(i = 0;i<=n;i++)
    {
        sq = i*i;
        cout<<sq<<endl;
    }
}

int main()
{
    int a;
    forLoopArg(a);
    return 0;
}
