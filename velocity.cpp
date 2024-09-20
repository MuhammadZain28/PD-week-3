#include<iostream>
using namespace std;
main()
{
float vi,acc,time,vf;
cout<<"Enter initial velocity  : ";
cin>>vi;
cout<<"Enter Acceleration      : ";
cin>>acc;
cout<<"Enter total Time (secs) : ";
cin>> time;
vf = (float(acc)*float(time)) + float( vi);
cout<<"Final Velocity          = "<<vf;
}