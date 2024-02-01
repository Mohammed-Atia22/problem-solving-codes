#include<bits/stdc++.h>
using namespace std;
int getprime(int num)
{
	int yes=0,no=0;
	for(int j=2;j<=sqrt(num);j++)
	{
		if(num%j==0 && j==1 && num/num==1)
		{
			yes++;
		}
		else if(num%j==0 && j!=1 && j!=num)
		{
			no++;
			break;
		}
	}
	if(no>0)
	{ 
		return 0;
	}
	else if(no==0)
	{
		return 1;
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		if((num>2&&num%2==0)||(num==0||num==1))
		{
			cout<<"NO"<<endl;
		}
		else
		{
			if(getprime(num))
			{	
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
}
