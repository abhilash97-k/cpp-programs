#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
 clrscr();
 char ch;
 FILE *fp;
 fp = fopen("HELLO.CPP","r");
 if(fp == NULL)
 {
  cout<<"File not present";
 }
 else
 {
  cout<<"File Present";
  while(1)
  {
  if(ch == EOF)
  break;
  ch = getc(fp);
  cout<<ch;
  }
 }
 getch();
 return 0;
}
