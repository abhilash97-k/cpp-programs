#include<iostream>
#include<conio.h>
using namespace std;
void fun(int i)
{
    if(i==10){
        return;
    }
    cout<<i<<endl;
    fun(i+1);
    cout<<i<<endl;
}
int main()
{
    fun(1);
    return 0;

}
