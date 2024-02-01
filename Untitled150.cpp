#include<iostream>
using namespace std;
long long int equation(long long int x,long long int n)
{
	long long int res=x/x - 1;
	if(n%2==0)
	{
		for(long long int i=2;i<=n;i+=2)
		{
			/*res+=pow(x,i);*/
			if(i==2)
			res+=x*x;
			else if(i==4)
			res+=x*x*x*x;
			else if(i==6)
			res+=x*x*x*x*x*x;
			else if(i==8)
			res+=x*x*x*x*x*x*x*x;
			else if(i==10)
			res+=x*x*x*x*x*x*x*x*x*x;
		}
	}
	else
	{
		for(long long int i=2;i<=n;i+=2)
		{
			/*res+=pow(x,i);*/
			if(i==2)
			res+=x*x;
			else if(i==4)
			res+=x*x*x*x;
			else if(i==6)
			res+=x*x*x*x*x*x;
			else if(i==8)
			res+=x*x*x*x*x*x*x*x;
			else if(i==10)
			res+=x*x*x*x*x*x*x*x*x*x;
		}
	}
	return res;
}
int main()
{
	long long int x,n,m;
	cin>>x>>n;
	m=equation(x,n);
	cout<<m;
}
