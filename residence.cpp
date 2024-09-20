#include<iostream>
using namespace std;
main()
{
int age = 0;
int houseMove =0;
int averageYear= 0;
cout<<"Enter your Age : ";
cin>>age;
cout<<"Enter No of Houses you moved : ";
cin>>houseMove;
averageYear = int(age)/(int(houseMove)+1);
cout<<"Average Year you moved in 1 house : "<<averageYear;
}
