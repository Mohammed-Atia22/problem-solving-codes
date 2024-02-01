#include<iostream>
using namespace std;

int main()
{
	long long int n,max=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		long long int a,b=0;
		cin>>a;
		if(a%2==0)
		{
			while(a%2==0)
			{
				a=a/2;
				b++;
			}
		}
		if(b>=max)
		{
			max=b;
		}
	}
	cout<<max;
}
