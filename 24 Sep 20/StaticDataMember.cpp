#include<iostream>
#include<conio.h>
using namespace std;
class one
{
    public:
    static int a;
    int b;
    static void se()
    {
        a++;

    }
    void dis()
    {
         b = 12;
        cout<<a<<endl<<b;
    }
};
int one :: a;
int main()
{
    one ob;
    ob.dis();
    one::se();
    ob.dis();
    return 0;
}
