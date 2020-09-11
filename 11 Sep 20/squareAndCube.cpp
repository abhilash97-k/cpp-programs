#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n, i, sq, cu;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
        sq = i * i;
        cu = i * i * i;
        cout<<sq<<"    "<<cu<<endl;
    }
    return 0;
}
