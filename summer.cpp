#include<iostream>
using namespace std;
main()
{
float size=0;
float cost=0;
float area=0;
float lb=0;
float A=0;
cout<<"Enter size of bag in lbs : ";
cin>>size;
cout<<"Enter cost bag : ";
cin>>cost;
cout<<"Enter Area in square meter bag covers : ";
cin>>area;
lb = float(cost)/float(size);
A = float(cost)/float(area);
cout<<"Cost of Bag per unit in lb  = "<<lb;
cout<<"Cost of Bag per unit in m^2 = "<<A;
}