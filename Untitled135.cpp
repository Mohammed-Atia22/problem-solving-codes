#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int n=0,m=1;
	n = s.size();
	for(int i=1;i<n;i++)
	{
		if(!(s[i]>='A'&&s[i]<='z')&&(s[i+1]>='A'&&s[i+1]<='z'))
		m++;
		else 
		continue;
	}
	cout<<m;
}
