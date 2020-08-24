/*Write a c++ program to that takes a number as a input and siplay it four
 times in a row (seperated by blank spaces), and then four times in the next
 row, with no seperation. You should do it two timmes.*/

 #include<iostream.h>
 #include<conio.h>
 void main()
 {
  int n;
  clrscr();
  cout<<"enter the number";
  cin>>n;
  cout<<n<<" "<<n<<" "<<n<<" "<<n<<endl;
  cout<<n<<n<<n<<n<<endl;
  getch();
 }