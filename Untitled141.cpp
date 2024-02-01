#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='E'&&s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T')
		{
			s[i]=' ';
			s[i+1]='g';
			s[i+2]='y';
			s[i+3]='p';
			s[i+4]='t';
		}
	}
	for(int i=0;i<s.size();i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||s[i]==' ')
		{
			cout<<s[i];
		}
	}
}
