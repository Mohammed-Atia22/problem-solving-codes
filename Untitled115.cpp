#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , count=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	/*sort(arr,arr+n);*/
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]+1==arr[j])
			{
				count++;
				break;
			}
		}
	}
	cout<<count;
}
