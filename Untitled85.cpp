#include<iostream>
using namespace std;

int main()
{
	long long int a,b,c=0;
	cin>>a;
	long long int arr[a];
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	cin>>b;
	for(int j=0;j<a;j++)
	{
		if(arr[j]==b)
		{
			cout<<j<<"\n";
			c++;
			break;
		}
	}
	if(c==0)
	cout<<"-1";
	
}
