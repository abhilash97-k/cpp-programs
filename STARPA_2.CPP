#include<iostream.h>
#include<conio.h>
char string(char c[10])
{
for(int i=0;c[i]!='\0';i++)
{
cout<<c[i];
}
return 0;
}
void main()
{
clrscr();
char c[10],i;
cout<<"Enter name :";
for(i=0;c[i]!='\0';i++)
{
cin>>c[i];
}
string(c);
getch();
}                    `111