#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1,num2;
	while(cin>>num1>>num2)
	{
		long long sum=0;
		int min1=min(num1,num2);
		int max1=max(num1,num2);
		if(num1<=0&&num2<=0)
		{
			return 0;
		}
		for(int i=min1;i<=max1;i++)
		{
			cout<<i<<" ";
		}
		cout<<"sum ="<<sum;
	}
}
