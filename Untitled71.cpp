#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,num;
	cin>>n;
	for(long long int i=0;i<n;i++)
	{
		long long int div=0,count=0,num2=0;
		cin>>num;
		while(num!=0)
		{
			div=num%2;
			num=num/2;
			count=count+div;
		}
		for(long long int j=0;j<count;j++)
		{
			num2=num2+(1*pow(2,j));
		}
		cout<<num2<<"\n";
	}
}
