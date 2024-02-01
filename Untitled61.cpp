#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int y=1000000000000000000000000000;
	long long int arr[];
	for(int i=0;i<;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<6;j++)
	{
		int sum=0;
		int min1=min(arr[j],arr[j+1]);
		int max1=max(arr[j],arr[j+1]);
		if(arr[j]>0&&arr[j+1]>0)
		{
			for(int i=min1;i<=max1;i++)
			{
				cout<<i<<" ";
				sum+=i;
			}
			cout<<"sum ="<<sum<<"\n";
		}
		j++;
	}
}
