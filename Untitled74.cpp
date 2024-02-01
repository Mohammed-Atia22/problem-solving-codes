#include<iostream>
using namespace std ;

int main()
{
	int n;
	char a='\\';
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=(n+1)/2)
			{
				if(j==i)
				{	
					cout<<a;
				}
				else if(j>=1&&j!=i&&j!=(n-i+1))
				{
					cout<<'*';
				}
				else if(j==n-i+1)
				{
					cout<<'/';
				}
			}
			else if(i==(n+1)/2)
			{
				if(j>=1&&j!=i&&j!=(n-i+1))
				{
					cout<<'*';
				}
				else if(j==i&&j==n-i+1)
				{
					cout<<'X';
				}
			}
			
		}
		cout<<"\n";
	}
}
