#include<bits\stdc++.h>
using namespace std;

int main()
{
	int A,B,max1,gdc=0,n1=0,n2=0,min1;
	cin>>A>>B;
	int arr1[A];
	int arr2[B];
	max1=max(A,B);
	for(int i=1;i<=A;i++)
	{
		if(A%i==0)
		{
	     	arr1[i-1]=i;
	     	//cout<<arr1[i-1]<<" ";
	     	n1++;
		}
	}
//	n1=sizeof(arr1)/sizeof(arr1[0]);
//	cout<<n1<<"\n";
	for(int i=1;i<=B;i++)
	{
		if(B%i==0)
		{
	     	arr2[i-1]=i;
//	     	cout<<arr2[i-1]<<" ";
	     	n2++;
		}
	}
//	n2=sizeof(arr2)/sizeof(arr2[0]);
//	cout<<n2<<"\n";
	min1=min(n1,n2);
//	cout<<min1<<" ";
	for(int i=0;i<min1;i++)
	{
		if(arr1[i]==arr2[i])
		{
			gdc=arr1[i];
		
		}
	}
	cout<<gdc<<" ";
}
