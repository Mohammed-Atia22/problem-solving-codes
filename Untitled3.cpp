#include<iostream>
using namespace std ;

int main()
{

	double minute2 ;
	const float calories_per_minute=3.6 ;
	
	for(int minute=5 ; minute<=30 ; minute++)
	{
	
	     if(minute2=minute%5==0)
	     {
	     		cout<<"the calories you purn in the minute numper "<<minute<<" equal = "<<calories_per_minute*minute<<endl;	
		 }
    
        
	}
}
