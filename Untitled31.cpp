#include<iostream>
using namespace std;

int main()
{
	long long a,b,c,d,e;
	cin>>a>>b>>c>>d;
	e=a%100*b%100*c%100*d%100;
	e=e%100;
	if(e<10)
	{
		cout<<0<<e<<endl;
	}
	else
	cout<<e;
}
