#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter the points"<<endl;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"Belong to First Quadrant"<<endl;
    }
    else if(x < 0 && y > 0)
    {
        cout<<"Belong to Second Quadrant"<<endl;
    }
    else if(x < 0 && y < 0)
    {
        cout<<"Belong to Third Quadrant"<<endl;
    }
    else
        cout<<"Belong to Fourth Quadrant"<<endl;
    return 0;
}
