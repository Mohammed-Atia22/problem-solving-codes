#include<iostream>
using namespace std;

int main()
{
	long long int a,b,sum=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		sum=sum+b;
	}
	if(sum<0)
	{
		sum=sum*-1;
	}
	cout<<sum<<"\n";
}
