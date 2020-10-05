#include<iostream>
#include<conio.h>
using namespace std;
void sum(int &x, int &y)
{
    x = 10;
    y = 20;
    int s = x + y;
    cout<<s<<endl;
}
int main()
{
    int x = 10, s;
    int y = 10;
    sum(x, y);
    s = x + y;
    cout<<s;
    return 0;
}
