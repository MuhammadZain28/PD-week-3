#include<iostream>
using namespace std;
main()
{
float fruits,veg;
float earn;
int total_v,total_f;
cout<<"enter price of vegetables in coins : ";
cin>>veg;
cout<<"enter price of fruits in coins : ";
cin>>fruits;
cout<<"enter total kilograms of vegetable : ";
cin>>total_v;
cout<<"enter total kilograms of fruits : ";
cin>>total_f;
earn = (float(veg)*int(total_v)+float(fruits)*int(total_f))/1.94;
cout<<"Total Earning in rupees = "<<earn;
}