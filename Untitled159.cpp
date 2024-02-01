#include<iostream>
using namespace std;
void shift(int n){
	int q=0;
	int arr[n];
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==0){
			q++;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] != 0){
			cout<<arr[i]<<" ";
		}
	}
	for(int i=0 ;i<q;i++){
		cout<<0<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	shift(n);
}
