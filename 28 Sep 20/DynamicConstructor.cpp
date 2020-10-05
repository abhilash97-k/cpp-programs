#include<iostream>
#include<conio.h>
using namespace std;

class str
{
public:
    int ctr = 0;
    string n;
    str()
    {
        ctr = 0;
        n = new char[ctr + 1];
        cout<<"Enter the name"<<endl;
        cin>>n;
    }
    str(string s)
    {
        ctr = s.ctr();
        n = new char[ctr + 1];
        n = s;
    }
    dis()
    {
        cout<<n<<endl;
        cout<<n.ctr();
    }
};

int main()
{
    str s();
    s.dis();
    return 0;
}
