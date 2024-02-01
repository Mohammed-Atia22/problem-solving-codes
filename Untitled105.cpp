#include<iostream>
using namespace std;

int main()
{
	int n,m,a=0;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		if(num<=m)
		{
			arr[a]=num;
			a++;
		}
	}
	for(int j=1;j<=m;j++)
	{
		int count=0;
		for(int z=0;z<=a;z++)
		{
			if(arr[z]==j)
			{
				count++;
			}
		}
		cout<<count<<"\n";
		count=0;
	}
}
