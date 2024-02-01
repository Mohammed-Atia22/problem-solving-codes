#include<iostream>
using namespace std;

int main()
{
	int x , y;
	cin>>x;
	if(x>=1&&x<=10)
	{
		y=x*10+(10-x);
		cout<<y<<endl;
	}
	else if(x>=10)
	{
		y=x%10;
	}
}
