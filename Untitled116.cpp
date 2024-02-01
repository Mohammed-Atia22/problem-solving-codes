#include<iostream>
using namespace std;

int main()
{
	int n , c=0 , f;
	cin>>n;
	int arr[n];
	cin>>arr[0];
	if(arr[0]>0)
	{
		for(int i=1;i<n;i++)
		{
			cin>>arr[i];
			if(i % 2!=0&&arr[i]>0)
			{
				c++;
			}
			else if(i%2==0&&arr[i]<0)
			{
				c++;
			}
		}
		cout<<c;
	}
	else if(arr[0]<0)
	{
		for(int i=1;i<n;i++)
		{
			cin>>arr[i];
			if(i % 2!=0&&arr[i]<0)
			{
				c++;
			}
			else if(i%2==0&&arr[i]>0)
			{
				c++;
			}
		}
		cout<<c;
	}
	
		
	
	
}
