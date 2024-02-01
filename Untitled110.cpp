#include<iostream>
using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<q;i++)
	{
		int l,r,sum=0;
		cin>>l>>r;
		for(int j=l-1;j<r;j++)
		{
			sum+=arr[j];
		}
		cout<<sum<<endl;
		sum=0;
	}
}
