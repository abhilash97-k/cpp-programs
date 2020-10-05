#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=0,i=1,j,d,dec=0, p=1, n1;
	cout<<"\n Enter Binary Number : ";
	cin>>n;
	n1 = n;
	for(j=n;j>0;j=j/10)
	{
        d=j%10;
        if(i==1)
        {
            p=p*1;
        }
        else
        {
            p=p*2;
        }
        dec=dec+(d*p);
        i++;
	}
    cout<<"\n Decimal Number Is : "<<dec;
    cout<<"\n\n";
    return 0;
}
