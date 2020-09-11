#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    for(ch = 65;ch<=122;ch++)
    {
        if(ch > 90 && ch < 97)
            continue;
        cout<<ch<<"   ";
        cout<<(int)ch<<endl;
    }
    return 0;
}
