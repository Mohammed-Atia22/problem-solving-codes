#include<iostream>
using namespace std;
int findnum(int n){
	int arr[n] = { 0 };
	int big=0;
	for(int i=0 ; i<n ; i++){
		int num;
		cin>>num;
		
		arr[num]=arr[num] + 1;
		
	}
	for(int i=0 ; i<n ; i++){
		if(arr[i] > big){
			big=i;
		}
		cout<<"big is"<<big;
	}
	return big;
	
}
int main(){
	int n;
	cin>>n;
	n=n+1;
	cout<<findnum(n);
}

