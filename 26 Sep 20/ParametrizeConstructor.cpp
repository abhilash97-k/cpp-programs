#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
public:
    int x, y;
    sum(int a, int b){
    x = a;
    y = b;
    //cin>>x>>y;
    }

};
int main()
{
    sum s1(2, 3);
    //cin>>s1.a>>s1.b;
    cout<<s1.x+s1.y;
    return 0;
}
