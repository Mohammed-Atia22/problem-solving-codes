#include<iostream>
using namespace std ;

int main()
{
	const double charges_per_year=2500 ;
	const double fee=0.04 ;
	
	for(int year=1  ; year<=6 ; year++)
	{
		cout<<"the mempership in our club in the year numper  "<< year << "equal  = "<<(charges_per_year)-(fee*year*charges_per_year)<<endl;
	}
}
