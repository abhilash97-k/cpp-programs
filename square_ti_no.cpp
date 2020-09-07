#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n, i, s;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i % 2 == 0){
        s = i * i;
        cout<<"Square is "<<s<<endl;
        }
    }
    return 0;
}
