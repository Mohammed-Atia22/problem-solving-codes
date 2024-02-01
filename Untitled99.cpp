#include<iostream>
using namespace std;

int main()
{
	long long int n,count,min;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2 !=0 )
		{
			cout<<"0";
			return 0;
		}
		if(i==0)
		{
			while(arr[i]%2==0)
			{
				arr[i]=arr[i]/2;
				count++;
				min=count;	
			}	
		}
		else if(i>0)
		{
			while(arr[i]%2==0)
			{
				arr[i]=arr[i]/2;
				count++;	
			}
		}
		if(count<=min)
		{
			min=count;
		}
		count=0;
	}
	cout<<min;
	
}
