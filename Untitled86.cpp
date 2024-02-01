#include<iostream>
using namespace std;


int main()
{
	long long int a,b;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		if(b==0)
		cout<<"0 ";
		else if(b>0)
		cout<<"1 ";
		if(b<0)
		cout<<"2 ";
	}
}
