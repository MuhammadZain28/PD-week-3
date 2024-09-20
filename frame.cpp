#include<iostream>
using namespace std;
main()
{
float min,frame,total;
cout<<"Enter No. of minutes: ";
cin>> min;
cout<<"Enter No. of frames : ";
cin>> frame;
total = 60*float(min)*float(frame);
cout<< "Total No. of Frames: " <<total;
}