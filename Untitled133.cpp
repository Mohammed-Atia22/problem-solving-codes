#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,c=0;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			c++;
		}
		else
		{
			if(s[i] != s[i-1])
			{
				c++;
			}
		}
	}
	cout<<c;
}
