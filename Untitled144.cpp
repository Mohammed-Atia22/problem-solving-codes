#include<iostream>
using namespace std;

int getadd(int a,int b)
{
	int c=a+b;
	return c;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<getadd(a,b);
}
