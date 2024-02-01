#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,sum=0,a=0;
	cin>>n>>k;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(long long int i=n-1;i>=n-k;i--)
	{
		if(arr[i] > 0)
		sum+=arr[i];
	}
	if(sum < 0)
	{
		cout<<"0";
	}
	else
	{
		cout<<sum;
	}
}
