#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1,s2,s3,s4;
	cin>>s;
	s2=s;
	for(int i=0;i<s.size()-1;i++)
	{
		s1=s;
		sort(s1.begin(),s1.begin()+i+1);
		sort(s1.begin()+i+1,s1.end());
		if(s1<s2)
		{
			s2=s1;
		}
	}
	cout<<s2;
}
