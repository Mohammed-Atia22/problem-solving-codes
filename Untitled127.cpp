#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int g=0,b=0;
		string s;
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]=='0'&&s[j+1]=='1'&&s[j+2]=='0')
			{
				g++;
			}
			else if(s[j]=='1'&&s[j+1]=='0'&&s[j+2]=='1')
			{
				g++;
			}
		}
		if(g>0)
		{
			cout<<"Good"<<endl;
		}
		else
		{
			cout<<"Bad"<<endl;
		}
	}
}
