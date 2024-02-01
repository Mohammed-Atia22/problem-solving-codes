#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1,num2,count=0,decount=0,val;
	cin>>num1>>num2;
	for(int i=num1;i<=num2;i++)
	{
		bool ch=0;
		val=i;
		while(val!=0)
		{
			short digit=val%10;
			val/=10;
			if(digit!=7&&digit!=4)
			{
				ch=1;
			}
		}
		if(ch==0)
		{
			cout<<i<<" ";
			count++;
		}
	}
	if(count==0)
	{
		cout<<"-1";
	}

	
}
