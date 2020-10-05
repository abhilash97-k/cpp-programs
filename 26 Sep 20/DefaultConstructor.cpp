#include<iostream>
#include<conio.h>
using namespace std;
class construct
{
public:
    int a, b;
   construct()
{
    cin>>a>>b;
}
};


int main()
{
   construct x;

    cout<<x.a+x.b;
    return 0;
}
