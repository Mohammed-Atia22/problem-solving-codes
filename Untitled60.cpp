#include<iostream>
using namespace std;

int main()
{
	long long n,j=0,l=0,m=0;
	cin>>n;
	long long arr[n];
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]*1==0)
		{
			cout<<arr[i];
			cout<<"\n";
		}
		while(arr[i]!=0)
		{	
		//	m++;
			cout<<arr[i]%10<<" ";
			arr[i]=arr[i]/10;
			//l=arr[i]/10;
			if(arr[i]==0)
			{
			//	i++;
				cout<<"\n";
			}	
		}
	}
	
}
