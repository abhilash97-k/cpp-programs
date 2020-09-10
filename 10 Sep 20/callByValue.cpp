#include<iostream>
#include<conio.h>
using namespace std;
fun(int x, int y)
{
    x = 12;
    y = 14;
}

int main()
{
    int a = 2;
    int b = 3;

   cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;
    fun(a, b);
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;

}
