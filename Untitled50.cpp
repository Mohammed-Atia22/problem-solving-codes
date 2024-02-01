#include<iostream>
using namespace std;
int getfact(long long n)
{
	long long fact=1.0;
	if(n<0)
	return 0;
	else if(n==0)
	{
		fact=1;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			fact*=i;
		}
		//cout<<fact<<"\n";
	}
	return fact;
}
int main()
{
	long long n;
	long long numofnum;
	long long arr1[numofnum];
	cin>>numofnum;
	for(int j=0;j<numofnum;j++)
	{
		long long arr[numofnum];
		cin>>arr[j];
		n=arr[j];
		arr1[j]=getfact(n);
	}
	for(int a=0;a<numofnum;a++)
	{
		cout<<arr1[a]<<"\n";
	}
}
