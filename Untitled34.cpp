#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if(a==(b+1))
	{
		cout<<"YES";
	}
	else if(b==(a+1))
	{
		cout<<"YES";
	}
	//else if(b>0&&a>0)
	//{
	//	cout<<"YES";
	//}
	else
	cout<<"NO";
}
