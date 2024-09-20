#include<iostream>
using namespace std;
main()
{
int bucketArea = 0 ;
float height =0 ;
float width = 0;
int paintedWall = 0;
cout<<"Enter Area that 1 bucket can paint : ";
cin>> bucketArea;
cout<<"Enter Height of wall : ";
cin>> height;
cout<<"Enter Width of wall  : ";
cin>> width;
paintedWall = bucketArea/(int(height)*int(width));
cout<<"Total No. of Walls you can paint = "<<paintedWall;
}