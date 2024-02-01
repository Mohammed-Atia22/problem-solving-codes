#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int search_val) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == search_val) {
            return mid;
        }
        else if (arr[mid] < search_val) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
	int n,q;
	cin>>n>>q;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		int result = binarySearch(arr,0,n-1,x);
		if(result==-1)
		{
			cout<<"not found"<<endl;
		}
		else
		{
			cout<<"found"<<endl;
		}
	}
	
}
