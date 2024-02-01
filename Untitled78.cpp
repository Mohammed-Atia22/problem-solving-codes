#include<iostream>
using namespace std;

int main()
{

	long long int n,a,b,s=0,min1,max1;
	cin>>n;
	for(long long int i=0;i<n;i++)
	{
		cin>>a>>b;
		min1=min(a,b);
		max1=max(a,b);
		//s=((b*(b+1)/2)-(a*(a+1)/2));
		s=((max1*(max1+1)/2)-(min1*(min1+1)/2));
		cout<<s+min1<<"\n";
	}
		//cout<<s<<"\n";
}
