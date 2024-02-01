#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>n>>s;
	string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	for(int i=0;i<s.size();i++)
	{
		if(n==1)
		{
			for(int j=0;j<original.size();j++)
			{
				if(s[i]==original[j])
				{
					s[i]=key[j];
					break;
				}
			}
		}
		else if(n==2)
		{
			for(int j=0;j<key.size();j++)
			{
				if(s[i]==key[j])
				{
					s[i]=original[j];
					break;
				}
			}
		}
	}
	cout<<s;
}
