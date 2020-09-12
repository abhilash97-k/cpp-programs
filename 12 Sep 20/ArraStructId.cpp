#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct student
{
    char name[10];
    int age;
    char add[50];
    int rollNo;
};
int main()
{
    struct student s[2];
    int rn, i, ctr = 0;
    cout<<"Enter the student details"<<endl;
    for(i=0;i<2;i++){
    cout<<"Enter Name";
    cin>>s[i].name;
    cout<<"Enter Age"<<endl;
    cin>>s[i].age;
    cout<<"Enter Address"<<endl;
    cin>>s[i].add;
    cout<<"Enter Roll No."<<endl;
    cin>>s[i].rollNo;
    }

    /*for( i=0;i<2;i++){
    cout<<"Student name :- "<<s[i].name<<endl;
    cout<<"Age :- "<<s[i].age<<endl;
    cout<<"Address :- "<<s[i].add<<endl;
    cout<<"Roll No :- "<<s[i].rollNo<<endl;
    }*/

    cout<<"Enter Roll Number to show data";
    cin>>rn;
    for(i=0;i<2;i++)
    {
    if(s[i].rollNo == rn)
    {

        ctr = 1;
        cout<<"Student name :- "<<s[i].name<<endl;
    cout<<"Age :- "<<s[i].age<<endl;
    cout<<"Address :- "<<s[i].add<<endl;
    cout<<"Roll No :- "<<s[i].rollNo<<endl;


    }
    }

    if(ctr == 0)
    {
        cout<<"Does not exisit";
    }
    return 0;
}
