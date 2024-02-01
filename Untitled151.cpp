#include<iostream>
using namespace std;
void getminmax(int n)
{
	int arr[n],min,max;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i==0)
		{
			min=arr[0];
			max=arr[0];
		}
		else
		{
			if(arr[i] > max)
			{
				max=arr[i];
			}
			if(arr[i] < min)
			{
				min=arr[i];
			}
		}
	}
	cout<<min<<" "<<max;
}
int main()
{
	int n;
	cin>>n;
	getminmax(n);
}
