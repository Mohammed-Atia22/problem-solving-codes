#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,d=0;
	cin>>n;
	cin>>a;
	cin>>b;
	for(int i=1;i<=n;i++)
	{
		int c=0,sum=0,j;
		j=i;
		while(j > 0)
		{
			c=j%10;
		//	cout<<c<<" ";
			sum=sum+c;
			j=j/10;
		}
		if(sum>=a&&sum<=b)
		{
			d=d+i;
		}
	}
	cout<<d;
}
