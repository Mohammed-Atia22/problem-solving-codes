#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool div=true;
	int num1,num2;
	while(div)
	{
		int sum=0;
		cin>>num1>>num2;
		if(num1*num2<=0)
		{
			div=false;
		}
		else
		{
			int min1=min(num1,num2);
			int max1=max(num1,num2);
			for(int i=min1;i<=max1;i++)
			{
				cout<<i<<" ";
				sum=sum+i;			
			}
			cout<<"sum ="<<sum<<"\n";
		}
		
	}
}
