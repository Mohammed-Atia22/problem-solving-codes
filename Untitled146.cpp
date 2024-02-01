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
int palindrome(long long int n)
{
	long long int n1=n;
	long long int digit,rev=0;
	do{
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}while(n!=0);
	
	if(n1==rev)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int main()
{
	long long int n;
	cin>>n;
	if(isodd(n) && palindrome(n))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
