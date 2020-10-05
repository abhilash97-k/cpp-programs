#include<iostream>
#include<conio.h>
using namespace std;
class square
{
    public:
    int i;
    void get();
    void show();
};

void square :: get()
    {
        cin>>i;
    }
void square :: show()
    {
        cout<<i*i;
    }
int main()
{
    square s;
    s.get();
    s.show();
    return 0;
}
