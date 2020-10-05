#include<iostream>
#include<conio.h>
using namespace std;

class A
{
private:
    int a;
public:
    friend void showA(A& x);
};
class B
{
private:
    int b;
public:
    friend void A::showB(B& y)
};
void addition(A& x, B& b)
{
    int b;
    cin>>x.a>>b;
    cout<<x.a+b<<endl;
}

int main()
{
    A c;
    B d;
    cout<<
    return 0;
}
