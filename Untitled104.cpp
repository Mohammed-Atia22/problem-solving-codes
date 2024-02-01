#include<iostream>
using namespace std;

int main()
{
	int n,m,c=0;
	cin>>n>>m;
	int a[n],j=0;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		for(  ;j<n;j++)
		{
			if(x==a[j])
			{
				c++;
				j++;
				break;
			}
		}
	}
	if(c==m)
	cout<<"YES";
	else
	cout<<"NO";
}
