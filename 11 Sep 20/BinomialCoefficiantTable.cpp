#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num, m , x, b;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(m=0;m<=num;m++)
    {
        cout<<m;
        int b = 1;
        for(x= 0;x<= m;x++)
        {
            if(m != 0 && x != 0)
            {
                b = b * (m - x + 1) / x;
            }
            cout<<"  "<<b;
        }
        cout<<endl;
    }
}
