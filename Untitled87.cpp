#include<iostream>
using namespace std;

int main()
{
	long long int a,b;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		if(b<=10)
		{
			cout<<"A["<<i<<"]"<<" = "<<b<<"\n";
		}
	}
}
