#include<iostream>
using namespace std ;

int main()
{
	int days ;
	int years ;
	int monthes ;
	int weeks ;
	int days2 ;

	
	cout<<"enter the numper of days "<<"\n";
	cin>>days;
	
	years=days/365;
	cout<<"the numper of years equal = "<<years<<"\n";
	
	monthes=(days-years*365)/30 ;
	cout<<"the numper of monthes equal = "<<monthes<<"\n";
	
	weeks=(days-(years*365+monthes*30))/7;
	cout<<"the numper of weeks equal = "<<weeks<<"\n";
	
	days2=days-(years*365+monthes*30+weeks*7);
	cout<<"the numper of days equal = "<<days2<<"\n";
}
