#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n],freq[m+1]={};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		int x=arr[i];
		freq[x]++;
	}
	for(int j=1;j<m+1;j++)
	{
		cout<<freq[j]<<endl;
	}
}
