#include<iostream>
using namespace std;
main()
{
float aticket,cticket,per;
int adult,child;
string movie;
int sale,don,rem;
cout<<"Enter Movie name : ";
cin>>movie;
cout<<"Enter price of adult ticket :$ ";
cin>>aticket;
cout<<"Enter price of children ticket :$ ";
cin>>cticket;
cout<<"Enter No of adult ticket sold : ";
cin >>adult;
cout<<"Enter No of child ticket sold : ";
cin>>child;
cout<<"Enter donation percentage : ";
cin>>per;
sale = int(adult)* int(aticket)+ int(child) * int(cticket);
don = (float(per)* int(sale))/100;
rem =  int(sale)-float(don);
cout<<"Movie : "<<movie;
cout<<"Total sales :$ "<<sale<<endl;
cout<<"Total Donation :$ "<<don<<endl;
cout<<"Remaining Amount After Donation :$ "<<rem<<endl;
}