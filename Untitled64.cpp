#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,num1,num2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		cin>>num1>>num2;
		int min1=min(num1,num2);
		int max1=max(num1,num2);
		for(int j=min1;j<max1;j++)
		{
			if(j%2!=0)
			{
				sum=sum+j;
			}
		}
		if(min1%2!=0)
		{
			sum=sum-min1;
			cout<<sum<<"\n";	
		}
		else
		{
			cout<<sum<<"\n";
		}
	}
}
