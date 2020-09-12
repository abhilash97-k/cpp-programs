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
    struct student s[4];
    cout<<"Enter the student details"<<endl;
    for(int i=0;i<5;i++){
    cout<<"Enter Name";
    cin>>s[i].name;
    cout<<"Enter Age"<<endl;
    cin>>s[i].age;
    cout<<"Enter Address"<<endl;
    cin>>s[i].add;
    cout<<"Enter Roll No."<<endl;
    cin>>s[i].rollNo;
    }

    /*strcpy(s[1].name,"akash");
    s[1].age = 14;
    strcpy(s[1].add,"addgavjzhs");
    s[1].rollNo = 19;

    strcpy(s[2].name,"ravi");
    s[2].age = 29;
    strcpy(s[2].add,"aasdxa");
    s[2].rollNo = 17;

    strcpy(s[3].name,"nitesh");
    s[3].age = 11;
    strcpy(s[3].add,"nagar");
    s[3].rollNo = 10;

    strcpy(s[4].name,"abhi");
    s[4].age = 17;
    strcpy(s[4].add,"afdewfsc");
    s[4].rollNo = 19;*/

    for(int i=0;i<5;i++){
    cout<<"Student name :- "<<s[i].name<<endl;
    cout<<"Age :- "<<s[i].age<<endl;
    cout<<"Address :- "<<s[i].add<<endl;
    cout<<"Roll No :- "<<s[i].rollNo<<endl;
    }

    return 0;
}
