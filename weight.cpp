#include<iostream>
using namespace std;
main()
{
float weight;
string name;
float days;
cout<<"Enter your Name : ";
cin>>name;
cout<<"Enter weight you want to lose in kg : ";
cin>> weight;
days = 15*float(weight);
cout<<""<<name <<" need "<<days <<" days to lose "<<weight <<"kg" ;
}
