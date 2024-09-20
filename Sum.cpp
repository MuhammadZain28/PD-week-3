#include<iostream>
using namespace std;
main()
{
int no = 0;
int digit1 = 0;
int digit2 = 0;
int digit3 = 0;
int digit4 = 0;
int sum = 0; 
cout<<"Enter Any 4-Digit Number : ";
cin>>no;
digit1 = int(no) % 10;
digit2 = int(no) % 100;
digit2 = int(digit2)/10;
digit3 = int(no) % 1000;
digit3 = int(digit3)/100;
digit4 = int(no) % 10000;
digit4 = int(digit4)/1000;
sum = digit1+digit2+digit3+digit4;
cout<<"Sum of Digits of number = "<<sum;
}

