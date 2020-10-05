#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n, i=1, j, bi=0,dn;

    cout<<"enter number "<<endl;
    cin>>n;
    for(j=n;j>0;j=j/2)
    {
        bi=bi+(n%2)*i;
        i=i*10;
        n=n/2;
    }
    cout<<"binary number is "<<bi;
    return 0;
}
