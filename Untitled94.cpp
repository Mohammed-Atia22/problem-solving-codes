#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,sum=0,t=0;
	cin>>n;
	string num;
	cin>>num;
	for(int i=0;i<n;i++)
	{
		sum=sum+num[i]-'0';
	}
	cout<<sum<<"\n";
}
