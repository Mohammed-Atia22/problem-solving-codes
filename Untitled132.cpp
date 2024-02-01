#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n,c=0;
	cin>>s;
	n=s.size();
	for(int i=0;i<n;i++)
	{
		int d=0;
		if(c==0 && s[i]=='h')
		{
			d++;
		}
		if(c==1 && s[i]=='e')
		{
			d++;
		}
		if(c==2 && s[i]=='l')
		{
			d++;
		}
		if(c==3 && s[i]=='l')
		{
			d++;
		}
		if(c==4 && s[i]=='o')
		{
			d++;
		}
		if(d>0)
		{
			c++;
		}
	}
	if(c==5)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
