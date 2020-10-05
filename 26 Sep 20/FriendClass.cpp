++#include<iostream>
#include<conio.h>
using namespace std;
class add
{
 private :
    int a;
 public:
    friend class sum;
};

class sum
{
private:
    int b;
public:
    void showAdd(add& x)
    {
        cin>>x.a>>b;
        cout<<x.a+b;
    }
};
int main()
{
    add A;
    sum S;
    S.showAdd(A);
    return 0;
}
