#include <iostream>

using namespace std;

int main() {
    long long int a;
    cin>>a;
    for(long long int i=0;i<a;i++)
    {
    	long long int n;
    	cin >> n;

    	long long int arr[n];
    	for(long long int i=0; i<n; i++) {
        cin >> arr[i];
    }

    long long int count = 0;

    for(long long int i=0; i<n; i++) {
        for(long long int j=i; j<n; j++) {
            bool is_increasing = true;
            for(long long int k=i; k<j; k++) {
                if(arr[k] >= arr[k+1]) {
                    is_increasing = false;
                    break;
                }
            }
            if(is_increasing) {
                count++;
            }
        }
    }

    cout<<count << endl;

	}
}
