#include<iostream>
using namespace std;

int main()
{
	long long n,m,k,c,d;
	cin>>n>>m>>k;
	if(n==0||k==0)
	{
		cout<<0;
	}
	else if(n>m&&n>k&&m>k)
	{
		cout<<k;
	}
	else if(n<m&&n<k&&m<k)
	{
		cout<<n;
	}
	else if(n<m&&n>k&&m>k)
	{
		cout<<k;
	}
	else if(n>m&&n>k&&m<k)
	{
		c=m+((n-m)/2);
		if(c<=k)
		{
		cout<<c;	
		}
		else
		cout<<m+(k-m);
	}
	else if(n<m&&n<k&&m>k)
	{
		cout<<n;
	}
	else if(n>m&&n<k&&m<k)
	{
		d=m+((n-m)/2);
		if(d<=k)
		{
		cout<<d;	
		}
		else
		cout<<m+(k-m);
	}
}
