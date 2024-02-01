#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,c,d,e;
	int f;
	cin>>a>>b>>c;
	d=(a*b)/c;
	e=sizeof(d);
	f=d;
//	f=int d;
	if(e==4)
	{
		cout<<"int";
	}
	else if(e==8&&f!=d)
	{
		cout<<"double";
	}
	else if(e==8&&e>2147483647)
	{
		cout<<"long long";
	}
}
