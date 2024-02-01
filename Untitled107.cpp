#include<iostream>
using namespace std;

int main()
{
	long long int n,m;
	cin>>n>>m;
	for(long long int i=0;i<n;i++)
	{
		long long int arr[m];
		for(long long int j=0;j<m;j++)
		{
			cin>>arr[j];
		}
		for(long long int z=m-1;z>=0;z--)
		{
			cout<<arr[z]<<" ";
		}
		cout<<endl;
	}
}
