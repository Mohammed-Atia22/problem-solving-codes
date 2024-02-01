#include<iostream>
using namespace std;

int main()
{
	long long int a,b,c,d,sum1=0,sum2=0;
	cin>>a;
	for(int i=0;i<a/2;i++)
	{
		cin>>b;
		sum1=sum1+b;	
	}
	if(a%2!=0)
	{
		cin>>d;
	}
	for(int j=0;j<a/2;j++)
	{
		cin>>c;
		sum2=sum2+c;	
	}
	if(sum1==sum2)
	cout<<"YES";
	else
	cout<<"NO";
	
}
