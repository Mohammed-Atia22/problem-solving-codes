#include<iostream>
using namespace std ;

int main()
{
	int speed , time ;
	cout<<"enter the speed for the car "<<endl;
	cin>>speed;
	
	cout<<"enter the time for the car "<<endl;
	cin>>time;
	
     if(speed>=1 && time>=2 )
     {
     		for(int i=0 ; i<=time ; i++)
	{
		cout<<" the distance in the " <<i<< " hour " <<i*speed<<endl;
	}

	 }
	 else
	 cout<<"enter postive values for the program "<<endl;
	
}
