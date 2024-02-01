#include<bits/stdc++.h>
using namespace std;
void swaparray(int n,int x,int y)
{
	int x1,y1,z=n;
	x=min(x , y);
	y=max(x , y);
	int l=(y-1)*n;
	x1=x;
	y1=y;
	int arr[n*n];
	for(int i=0 ; i < n*n ; i++)
	{
		cin>>arr[i];
	}
	for(int j = (x-1)*n ; j < n*x ; j++)
	{
		swap(arr[j] , arr[l]);
		l++;
	}
	x=x-1;
	y=y-1;
	for(int r=0 ; r < n ; r++)
	{
		swap(arr[x] , arr[y]);
		x+=n;
		y+=n;
	}
	for(int f=0 ; f < n*n ; f++)
	{
		if(f%n == 0)
		{
			cout<<endl;
			cout<<arr[f]<<" ";
		}
		else
		{
			cout<<arr[f]<<" ";
		}
	}
}
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	swaparray(n,x,y);
}
