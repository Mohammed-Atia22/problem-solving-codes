#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<min(a,min(b,c))<<endl;
		cout<<(a+b+c)-(max(a,max(b,c))+min(a,min(b,c)))<<endl;
	cout<<max(a,max(b,c))<<endl;
	

	cout<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
}
