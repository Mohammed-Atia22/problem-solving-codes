#include<iostream>
using namespace std;

int main()
{
	int pass;
	do{
	    cin>>pass;
	    if(pass!=1999)
	    {
	    	cout<<"Wrong\n";
		}
	}
	while(pass!=1999);
	
	cout<<"Correct\n";
	
}
