#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		long long int a,b,sum=0,c=0,cou=0;
		cin>>a>>b;
		c=a*(a+1)/2;
		if(c>=b)
		{
			
			for(int j=a;j>=1;j++)
			{
				if(sum+j<=b)
				{
					cout<<j<<" ";
					sum=sum+j;
				}
				//if(sum<b)
				//j++;
			}
		}
		else
		cout<<"-1";
		cout<<"\n";
	}
}
