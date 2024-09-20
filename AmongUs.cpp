#include<iostream>
using namespace std;
main()
{
float i,p,per;
cout<<"Enter imposter count : ";
cin>> i;
cout<<"Enter No. of Players : ";
cin>>p;
per = 100*(float(i)/float(p));
cout<<"Chances of being an imposter = "<<per <<"%";
}