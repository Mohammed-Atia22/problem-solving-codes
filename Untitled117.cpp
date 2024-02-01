#include<iostream>
using namespace std;

int main()
{
	int n,c=0,d=1;
	cin>>n;
	int arr[n],arr1[n],arr2[n];
	for(int i=0;i<n;i++)
	{
		int value;
		cin>>value;
		arr[i]=value;
		arr1[i]=value;
	}
	int temp;
	int temp1;
	arr1[0] *= -1;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			temp=arr[i];
			temp1=arr1[i];
		}
		else
		{
			if((temp > 0 && arr[i] > 0) || (temp < 0 && arr[i] < 0))
			{
				arr[i] *= -1;
				c++;
			}
			if((temp1 > 0 && arr1[i] > 0) || (temp1 < 0 && arr1[i] < 0))
			{
				arr1[i] *= -1;
				d++;
			}
			temp=arr[i];
			temp1=arr1[i];
		}
	}
	if(c<d)
	{
		cout<<c;
	}
	else
	cout<<d;
	
}
