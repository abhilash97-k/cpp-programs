#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int p, q, r, s;
    cout<<"Enter the value for p";
    cin>>p;
    cout<<"Enter the value for q";
    cin>>q;
    cout<<"Enter the value for r";
    cin>>r;
    cout<<"Enter the value for s";
    cin>>s;
    r >=  0;
    s >= 0;
    p % 2 == 0;
    if(q>r && s > p && r + s > p + q)
    {
        cout<<"Correct value";
    }
    else
    {
        cout<<"Wrong Values";
    }
    return 0;

}
