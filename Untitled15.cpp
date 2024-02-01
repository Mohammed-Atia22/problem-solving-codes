#include<iostream>
using namespace std;

int main()
{
	static int x , y ;
	char s;
	cin>>x>>y>>s;
	if(x>=1&&x<=100&&y>=1&&y<=100)
	{
		if(s=='U'||s=='D'||s=='L'||s=='R')
		{
			if(s=='U')
			{
			  y=y+1;
			  cout<<y<<endl;
			}
			else if(s=='D')
			{
				y=y-1;
				cout<<y<<endl;
			}
			else if(s=='L')
			{
				x=x-1;
				cout<<x<<endl;
			}
			else if(s=='R')
			{
				x=x+1;
				cout<<x<<endl;
			}
		//	cout<<x<<endl;
		//	cout<<y<<endl;
		}
		cout<<x<<endl;
			cout<<y<<endl;
	}
}
