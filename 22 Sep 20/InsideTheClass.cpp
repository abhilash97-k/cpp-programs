#include<iostream>
#include<conio.h>
using namespace std;
class square
{
    public:
    int i;
    void get()
    {
        cin>>i;
    }
    void show()
    {
        cout<<i*i;
    }
};
int main()
{
    square s;
    s.get();
    s.show();
}
