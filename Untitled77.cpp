#include<iostream>
using namespace std;

int main()
{
	long long int n,l,r;
	cin>>n;
	for(long long int i=0;i<n;i++)
	{
		long long int s=0;
		cin>>l>>r;
		for(long long int j=l;j<=r;j++)
		{
			s=s+j;
		}
		cout<<s<<"\n";
	}
}
