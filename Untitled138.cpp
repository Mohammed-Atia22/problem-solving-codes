#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int c=0,L=0,R=0;
	char p=s[0];
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] != s[i+1])
		{
			c++;
		}
	}
	c/=2;
	cout<<c<<endl;
	for(int i=0;i<s.size();i++)
	{
		if(i==0)
		{
			if(s[0]=='L')
			{
				L++;
				cout<<s[i];
			}
			else 
			{
				R++;
				cout<<s[i];
			}
		}
		else
		{
			if(s[i]==s[0]&&s[i-1]!=s[0])
			{
				if(L==R)
				{
					cout<<endl;
					L=0;
					R=0;
					if(s[i]=='L')
					{
						L++;
						cout<<s[i];
					}
					else 
					{
						R++;
						cout<<s[i];
					}
				}
			}
			else
			{
				if(s[i]=='L')
				{
					L++;
					cout<<s[i];
				}
				else 
				{
					R++;
					cout<<s[i];
				}
			}
		}
	}
}
