#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,c,d;
	cin>>a>>b>>c>>d;
	a=log(a);
	b=log(b);
	c=log(c);
	d=log(c);
	
	if((a+b)*c==d)
	{
		cout<<"YES";
	}
	else if((a-b)*c==d)
	{
		cout<<"YES";
	}
	else if((b-a)*c==d)
	{
		cout<<"YES";
	}
	else if((c+a)*b==d)
	{
		cout<<"YES";
	}
	else if((c-a)*b==d)
	{
		cout<<"YES";
	}
	else if((b+c)*a==d)
	{
		cout<<"YES";
	}
	else if((a-c)*b==d)
	{
		cout<<"YES";
	}
	else if((b-c)*a==d)
	{
		cout<<"YES";
	}
	else if((c-b)*a==d)
	{
		cout<<"YES";
	}
	else if((a+b)-c==d)
	{
		cout<<"YES";
	}
	//else if((a-b)-c==d)
	//{
	//	cout<<"YES";
	//}
	//else if((a+b)+c==d)
	//{
	//	cout<<"YES";
	//}
	else if((a-c)+b==d)
	{
		cout<<"YES";
	}
	else if((b-a)+c==d)
	{
		cout<<"YES";
	}
	else if((b-c)+a==d)
	{
		cout<<"YES";
	}
	else if((c-a)+b==d)
	{
		cout<<"YES";
	}
	else if((c-b)+a==d)
	{
		cout<<"YES";
	}
	else if((a+c)-b==d)
	{
		cout<<"YES";
	}
	else if((b+c)-a==d)
	{
		cout<<"YES";
	}
	else if((a+b)-c==d)
	{
		cout<<"YES";
	}
	//else if((b-c)-a==d)
	//{
	//	cout<<"YES";
	//}
	//else if((b-a)-c==d)
	//{
	//	cout<<"YES";
	//}
	//else if((c-a)-b==d)
	//{
	//	cout<<"YES";
	//}
	//else if((c-b)-a==d)
	//{
	//	cout<<"YES";
	//}
	//else if((a*b)*c==d)
	//{
	//	cout<<"YES";
	//}
	else if((a*b)-c==d)
	{
		cout<<"YES";
	}
	else if((a*c)-b==d)
	{
		cout<<"YES";
	}
	else if((c*b)-a==d)
	{
		cout<<"YES";
	}
	else if((a*b)+c==d)
	{
		cout<<"YES";
	}
	else if((a*c)+b==d)
	{
		cout<<"YES";
	}
	else if((c*b)+a==d)
	{
		cout<<"YES";
	}
	else
	cout<<"NO";
}
