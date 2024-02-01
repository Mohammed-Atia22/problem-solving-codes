#include<iostream>
using namespace std;

int main()
{
	double x;
	int y;
	cin>>x;
	y=x;
	if(x==static_cast<int>(x))
	{
		cout<<"int "<<x<<endl;
	}
	else
	cout<<"float "<<y<<" "<<x-y<<endl;
}
