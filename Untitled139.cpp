#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	bool qu=false;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i-1]=='?')
		{
			qu=true;
		}
		if(qu==true&&s[i]!='&'&&s[i]!='=')
		{
			cout<<s[i];
		}
		if(qu==true&&s[i]=='=')
		{
			cout<<':'<<" ";
		}
		if(qu==true&&s[i]=='&')
		{
			cout<<endl;
		}
	}
}
