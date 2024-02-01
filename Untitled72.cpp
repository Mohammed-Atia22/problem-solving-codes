#include<iostream>
using namespace std;

int main()
{
	long long int n,a=0,b=1;
	cin>>n;
	for(long long int i=1;i<=n;i++)
	{
		long long int sum=0;
		if(i==1)
		{
			cout<<"0"<<" ";
		}
		else if(i==2)
		{
			cout<<"1"<<" ";
		}
		else if(i>2)
		{
		//	for(int j=0;j<2;j++)
		//	{
			sum=a+b;
		//	}
			cout<<sum<<" ";
			a=b;
			b=sum;
		}
	}
}
