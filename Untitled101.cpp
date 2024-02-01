#include<iostream>
using namespace std;

int main()
{
	long long int n,num,sum1=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		sum1+=num;
	}
	for(int j=0;j<n;j++)
	{
		cin>>num;
		sum2+=num;
	}
	if(sum1==sum2)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
}
