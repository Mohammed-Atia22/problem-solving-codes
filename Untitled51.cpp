#include<iostream>
using namespace std;

int main()
{
	bool isprime=true; 
	int n;
	cin>>n;
	if(n==0||n==1)
	{
		isprime=false;
	}
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			isprime=false;
			break;
		}
	}
	if(isprime)
	cout<<"YES";
	else
	cout<<"NO";
	
}
