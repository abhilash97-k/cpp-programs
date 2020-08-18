/*Write a c++ program to that takes three numbers (x, y, z) as input and
 print the output of (x + y).z and x.y + y.z.*/

 #include<conio.h>
 #include<iostream.h>
 #include<stdio.h>

 void main()
 {
  int x, y, z, a, b;
  clrscr();
  cout<<endl<<"Enter the value of x , y and z"<<endl;
  cin>>x>>y>>z;
  a = (x + y) * z;
  b = x * y + y * z;
  cout<<endl<<"(x + y).z = "<<a<<endl;
  cout<<endl<<"x * y + y * z = "<<b<<endl;
  getch();
 }
