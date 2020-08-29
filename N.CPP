#include<iostream.h>
#include<conio.h>
#include<string.h>
class Account
{
 private:
 char name[10];
 int id;
 char state[50];
 int mob_no;

 public:
 Account(char name[10], int, char state[10], int);
 Account(char name[10]);

 void display()
 {
  cout<<endl<<"name :- "<<name<<endl;
  cout<<endl<<"id :- "<<id<<endl;
  cout<<endl<<"state :- "<<state<endl;
  cout<<endl<<"mob_no :- "<<mob_no<<endl;
 }
};

Account :: Account(char aname[10], int b, char cstate[10], int d)
{
 strcpy(name, aname);
 id = b;
 strcpy(state, cstate);
 mob_no = d;
}

Account :: Account (char aname[10])
{
 strcpy(name, aname);
}

void main()
{
 clrscr();
 Account giro("Cheers, Marry", 1234, "eahgsd", 765)
 //save("sahdcse");
 giro.display();
 //save.display();
 getch();
}