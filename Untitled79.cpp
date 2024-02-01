#include<iostream>
using namespace std;

int main()
{
	long long int n,m,i,j;
	cin>>n;
	m=n%4;
	i=(n-m)/4;
	if(i%2==0)
	{
		j=n%4;
	}
	else
	{
		if(n%4==0)
		j=3;
		if(n%4==1)
		j=2;
		if(n%4==2)
		j=1;
		if(n%4==3)
		j=0;
	}
	
	cout<<i<<" "<<j;
	
}
