#include<iostream>
using namespace std;

int main()
{
//	bool isprime=true; 
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		bool isprime=true; 
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=false;
			}
		}
		
		if(isprime)
		cout<<i<<" ";	
	}
	
}
