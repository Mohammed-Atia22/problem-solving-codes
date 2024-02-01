#include<iostream>
using namespace std;

int main()
{
	int n,m,a,b;
	cin>>n>>m;
	char arr[n][m];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>arr[i][j];
		}
	}
	cin>>a>>b;
	for(int i=a-1;i<=a+1;i++)
	{
		if(i==0)
		{
			continue ;
		}
		for(int j=b;j<=b+1;j++)
		{
			if(i==a&&j==b)
			{
				break;
			}
			if(arr[i][j]=='.')
			{
				cout<<"no";
				return 0;
			}
		}
	}
	cout<<"yes";
}
