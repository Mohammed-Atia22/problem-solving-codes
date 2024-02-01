#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		 // Reading the array size and elements
    	//cout << "Enter the size of the array: ";
    	cin >> n;
    	long long int arr[n];

    	//cout << "Enter the elements of the array: ";
    	for(long long int i = 0; i < n; i++) {
        	cin >> arr[i];
    	}

    	// Generating all subarrays and finding max value
    	//cout << "Max values in all subarrays of the given array are: \n";
    	for(long long int i = 0; i < n; i++) {
        	long long int max_val = arr[i];
        	for(long long int j = i; j < n; j++) {
            	max_val = max(max_val, arr[j]);
            	cout << max_val << " ";
        	}
    	}
	cout<<"\n";
	}
   
}
