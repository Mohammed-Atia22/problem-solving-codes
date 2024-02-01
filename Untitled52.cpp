#include<iostream>
using namespace std;

int main()
{
	int n,remainder,revnum=0,org;
	cin>>n;
	org=n;
	while(n!=0)
	{
		remainder=n%10;
		revnum=revnum*10+remainder;
		n/=10;
	}
	
	if(org==revnum)
	{
		cout<<revnum<<"\n";
		cout<<"YES";
	}
	else
	{
		cout<<revnum<<"\n";
		cout<<"NO";
	}
	
}
