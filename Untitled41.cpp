#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
//	double d,e;
	cin>>a;
	b=a%10;
	c=(a-b)/10;
	double d=(double)b/(double)c;
	//d=static_cast<double>(d);
    double e=(double)c/(double)b;
	//e=static_cast<double>(e);
	if(floor(d)==ceil(d))
	{
		cout<<"YES";
	}
	else if((floor(e)==ceil(e)))
	{
		cout<<"YES";
	}
	else
	cout<<"NO";
	
	
}
