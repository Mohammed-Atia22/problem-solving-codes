#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
//	int arr[n*n];
	int a=1,b=2,c=3;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<a<<" "<<b<<" "<<c<<"PUM \n";	
		}
		else
		{
			a=a+4;
			b=b+4;
			c=c+4;
			cout<<a<<" "<<b<<" "<<c<<"PUM \n";	
		}		

	}

}
