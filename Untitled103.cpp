#include<iostream>
using namespace std;

int main()
{
	int n,sum,sum1=0,sum2=0,count1=0,count2=0;
	cin>>n;
	int arr[n*n];
	for(int i=0;i<n*n;i++)
	{
		cin>>arr[i];
	}
	if(n%2!=0)
	{
		for(int j=0;j<n*n;j+=n+1)
		{
			if(count1<n)
			{
				sum1=sum1+arr[j];
				count1++;
			}
		}
		for(int k=n-1;k<n*n;k+=n-1)
		{
			if(count2<n)
			{
				sum2=sum2+arr[k];
				count2++;
			}
		}
		sum=sum1-sum2;
		if(sum<0)
		{
			cout<<sum*-1;
		}
		else
		cout<<sum;
		return 0;
	}
	else
	{
		for(int j=0;j<n*n;j+=n+1)
		{
			if(count1<n)
			{
				sum1=sum1+arr[j];
				count1++;
				
			}
		}
		for(int k=n-1;k<n*n;k+=n-1)
		{
			if(count2<n)
			{
				sum2=sum2+arr[k];
				count2++;
			}
		}
		sum=sum1-sum2;
		if(sum<0)
		{
			cout<<sum*-1;
		}
		else
		cout<<sum;
		return 0;	
	}
}
