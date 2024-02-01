#include<bits/stdc++.h>
using namespace std;
int isodd(long long int n)
{
	if(n%2 != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int ispalindrome(long long int n)
{
	long long int c=0,y=0;
	long long int a[25]={};
	long long int b[25]={};
	while(n!=0)
	{
		long long int z=0;	
		if(n%2==0)
		{
			a[z]==0;
			b[z]==0;
		}
		else
		{
			a[z]==1;
			b[z]==1;
		}
		z++;
		c++;
		n=n/2;
	}
	for(int j=0;j<c;j++)
	{
		long long int m=c-1;
		if(a[j]==b[m])
		{
			y++;
		}
		m--;
	}
	if(y==c)
	{
		return 1;
	}
	else
	return 0;
}
int main()
{
	long long int n;
	if(isodd(n) && ispalindrome(n))
	{
		cout<<"YES";
	}
	else
	{	
		cout<<"NO";
	}
}
