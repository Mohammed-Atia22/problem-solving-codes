#include<bits/stdc++.h>
using namespace std;
void distincitnum(int n){
	int arr[n];
	int num=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(arr[i] != arr[i+1]){
			num++;
		}
	}
	cout<<num;
}
int main(){
	int n;
	cin>>n;
	distincitnum(n);
}
