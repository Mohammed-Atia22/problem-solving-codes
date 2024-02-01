#include<iostream>
using namespace std;
void fillarray(int n){
	int arr[2*n];
	for(int i=n;i<2*n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<2*n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	fillarray(n);
}

