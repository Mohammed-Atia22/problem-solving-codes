#include<iostream>
using namespace std;

int main()
{
	long long int n,k,m;
	cin>>n>>k;
	if(n%k==0)
	{
		m=(n/k);
	}
	else
	m=(n/k)+1;
	for(int i=0;i<m;i++)
	{
		long long int arr[k],min,cmt=0;
		//cmt=n-k;
		//n=n-cmt;
		if(n<k)
		{
			k=n;
		}
		for(int j=0;j<k;j++)
		{
		//	if(n<k)
		//	{
				
				cin>>arr[j];
		//		cnt++;
		//	}
			if(j==0)
			{
				min=arr[j];
			}
			if(j>0&&arr[j]<min)
			{
				min=arr[j];
			}
			
		}
		cout<<min<<" ";
		n=n-k;
	}
}
