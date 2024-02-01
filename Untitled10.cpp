#include<iostream>
using namespace std;

int main()
{
	double sales1 , division ;
	//sales2,sales3,sales4,sales5 ;
	
	cout<<"enter the sales for the 1 store "<<"\n";
	cin>>sales1; 
//	cout<<"enter the sales for the 2 store "<<"\n";
//	cin>>sales2; 
//	cout<<"enter the sales for the 3 store "<<"\n";
//	cin>>sales3; 
//	cout<<"enter the sales for the 4 store "<<"\n";
//	cin>>sales4; 
//	cout<<"enter the sales for the 5 store "<<"\n";
//	cin>>sales5;
	
	division=sales1/10;
	for(int i=1 ; i<=division ; i++)
	{
		cout<<"*";
	}
	 
}
