#include<iostream>
#include<conio.h>
using namespace std;
class one
{
    private:
    int a;
    int b;
friend void show(one& x, one& y);
};
void show(one& x, one& y)
    {

        cin>>x.a>>y.b;
        cout<<"Access"<<"   "<<x.a+y.b;
    }
int main()
{
    one o, m;
    show(o, m);
    return 0;
}
