#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int start=0,end=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A'&&s[i]<='z')
		{
			end++;
		}
		else
		{
			reverse(s.begin()+start,s.begin()+end);
			start=end+1;
			end++;
		}
		if(i==s.size()-1)
		{
			reverse(s.begin()+start,s.begin()+end);
		}
	}
	cout<<s;
}
