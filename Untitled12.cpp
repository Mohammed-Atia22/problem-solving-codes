#include<iostream>
using namespace std ;

int main()
{
	int rating ;
	cout<<"enter your rating \n";
	cin>>rating ;
	
	if(rating>=1900)
	{
		cout<<"division 1 \n";
	}
	else if(rating>=1600 && rating<=1899)
	{
		cout<<"division 2 \n";
	}
	else if(rating>=1400&&rating<=1599)
	{
		cout<<"division 3 \n"; 
	}
	else if(rating<=1399)
	{
		cout<<"division 4 \n";
	}
}
