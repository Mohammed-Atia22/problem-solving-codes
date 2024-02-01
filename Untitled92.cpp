#include<iostream>
using namespace std;

int main()
{
	long long int t,n,i=1,j=1,res=0,min=0;
	cin>>t;
	for(int z=0;z<t;z++)
	{
		cin>>n;
		long long int arr[n];
		for(long long int x=1;x<=n;x++)
		{
			cin>>arr[x];
		}
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i<j)
				{
					res=arr[i]+arr[j]+j-i;
					if(i==1&&j==2)
					{	
						min=res;
					}
					if(res<min)
					{
						min=res;
					}
				}
				//res=0;
				
			}
		}
		cout<<min<<"\n";
		
	}
}
