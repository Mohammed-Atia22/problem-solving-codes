#include<iostream>
using namespace std;

int main()
{
	long long int a,b,low=0,count=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		if(i==0)
		{
			low=b;
		}
		if(b<low)
		{
			low=b;
			count=i;
		}
	}
	cout<<low<<" "<<count+1<<"\n";
}
