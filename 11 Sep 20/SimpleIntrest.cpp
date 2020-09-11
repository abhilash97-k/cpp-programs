#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int d;
    float si, am, r;
    cout<<"Amount"<<endl;
    cout<<"rate of intrest"<<endl;
    cout<<"Days"<<endl;
    cin>>am>>r>>d;
    si = (am * r * d) / 100;
    cout<<si;
    return 0;
}
