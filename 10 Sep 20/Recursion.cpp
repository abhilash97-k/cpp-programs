#include<iostream>
#include<conio.h>
using namespace std;
void fun(int i)
{
    if(i==10){
        return;
    }
    cout<<i;
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}
