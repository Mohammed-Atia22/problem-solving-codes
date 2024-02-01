#include<iostream>
using namespace std;
int getnum(int n)
{
	for(int i=1;i<n;i++)
	{
		cout<<i<<" ";
	}
	return n;
}
int main()
{
	int n;
	cin>>n;
	cout<<getnum(n);
}
