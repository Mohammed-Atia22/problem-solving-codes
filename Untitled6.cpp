#include<iostream>
#include<string>
using namespace std ;

int main()
{
	int num1 , num2 ;
	string choice = "division" , "subtraction" , "addition" , "multiblication" ;
	cout<<"enter the first numper "<<endl ;
	cin>>num1;
	cout<<"enter the second numper "<<endl ;
	cin>>num2;
	
	while(choice= division || choice=subtraction || choice=addition || choice=multiblication)
	{
		cout<<" chose the process "<<endl;
		cout<<" 1 - division "<<endl;
		cout<<" 2 - subtraction  "<<endl;
		cout<<" 3 - addition "<<endl;
		cout<<" 4 - multiblication "<<endl;
		
	     	if(choice == division)
		{
			cout<<"the product of the numper one divide by numper two equal "<<num1/num2<<endl;
		}
			if(choice == subtraction)
		{
			cout<<"the product of the numper one subtract by numper two equal "<<num1-num2<<endl;
		}
			if(choice == division)
		{
			cout<<"the product of the numper one addition by numper two equal "<<num1+num2<<endl;
		}
			if(choice == division)
		{
			cout<<"the product of the numper one multibly by numper two equal "<<num1*num2<<endl;
		}
		
		      
	}

}
