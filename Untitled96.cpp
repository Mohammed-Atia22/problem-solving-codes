#include<iostream>
using namespace std;

int main()
{
	long long int n,num,min=0,max=0;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i==0)
		{
			min=arr[i];
			max=arr[i];
		}
		if(i>0&&arr[i]<min)
		{
			min=arr[i];
		}
		if(i>0&&arr[i]>max)
		{
			max=arr[i];
		}
	}
	for(int j=0;j<n;j++)
	{
		if(arr[j]==min)
		{
			cout<<max<<" ";
		}
		else if(arr[j]==max)
		{
			cout<<min<<" ";
		}
		else if(arr[j]!=min&&arr[j]!=max)
		{
			cout<<arr[j]<<" ";
		}
	}	
}
