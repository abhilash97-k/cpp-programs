#include<iostream>
#include<conio.h>
using namespace std;
void fun(int *x, int *y)
{
    *x = 12;
    *y = 16;
}
int main()
{
    int a = 2, b =3;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    fun(&a,&b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

}
