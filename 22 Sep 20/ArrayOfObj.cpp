#include<iostream>
#include<conio.h>
using namespace std;
class studentName
{
public:
    char name[10];
    void get()
    {
        cin>>name;
    }
    void show()
    {
        cout<<name;
    }
};


int main()
{
    int i;
    studentName n[4];
    for(i=0;i<4;i++)
    {
        cout<<"Enter the name"<<endl;
        n[i].get();
    }
    for(i=0;i<4;i++)
    {
        n[i].show();
        cout<<endl;
    }
    return 0;
}
