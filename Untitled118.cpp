#include<iostream>
using namespace std;

int main()
{
	/* 1 2 3 4 5 */
	int n;
	cin>>n;
	int f=0,e=n-1;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n%2==0)
	{
		for(int i=0;i<n/2;i++)
		{	
			e=n-i-1;
			cout<<arr[i]<<" ";
			cout<<arr[e]<<" ";
		}
	}
	else
	{
		for(int i=0;i<n/2;i++)
		{	
			e=n-i-1;
			cout<<arr[i]<<" ";
			cout<<arr[e]<<" ";
		}
		cout<<arr[(n/2)];
	}
}
