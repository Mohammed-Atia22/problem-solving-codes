#include<iostream>
using namespace std;

int main()
{
	long long int n,min,count=0;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i==0)
		{
			min=arr[i];
		}
		if(arr[i] < min)
		{
			min=arr[i];
		}
	}
	for(int j=0;j<n;j++)
	{
		if(arr[j]==min)
		{
			count++;
		}
	}
	if(count%2!=0)
	{
		cout<<"Lucky";
	}
	else
	cout<<"Unlucky";
}
