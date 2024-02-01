#include<iostream>
using namespace std;

int main()
{
	int a,b,e,f;
	char c,d;
	cin>>a>>c>>b>>d>>e;
	if(c=='+')
	{
		f=a+b;
		if(f==e)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<a+b<<endl;
		
	}
	else if(c=='-')
	{
		f=a-b;
		if(f==e)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<a-b<<endl;
		
	}
	else if(c=='*')
	{
		f=a*b;
		if(f==e)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<a*b<<endl;
		
	}
	
}
