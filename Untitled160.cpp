#include<bits/stdc++.h>
using namespace std;
void getmaxandmin(int n , int arr[]){
	cout<<"The maximum number"<<" : "<<arr[n-1]<<endl;
	cout<<"The minimum number"<<" : "<<arr[0]<<endl;
}
void getprime(int n , int arr[]){
	int num=0;
	for(int i=1;i<n;i++){
		int q=0;
		for(int j=2; j < arr[i] ; j++){
			if(arr[i] % j ==0 ){
				q++;
			}
		}
		if(q==0){
			num++;
		}
	}
	cout<<"The number of prime numbers"<<" : "<<num<<endl;
}
void getpalindrome(int n , int arr[]){
	int pal=0;
	for(int i=0;i<n;i++){
		int originnum=arr[i];
		int revnum=0;
		while(arr[i]>0){
			int digit=arr[i]%10;
			revnum=revnum*10 + digit;
			arr[i]=arr[i]/10;
		}
		if(originnum==revnum){
			pal++;
		}
	}
	cout<<"The number of palindrome numbers"<<" : "<<pal<<endl;
}
void getgreat(int n , int arr[]){
	int val=0,maximum=0;
	for(int i=0; i<n ; ++i){
		int count=0;
		for(int z = 1; z <= arr[i]; z++){
			if(arr[i] % z == 0){
				count++;
			}
		}
		cout<<count<<endl;
		if(count >= maximum){
			maximum=count;
			val=arr[i];
		}
	}
	cout<<"The number that has the maximum number of divisors"<<" : "<<val<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr , arr + n);
	getmaxandmin(n,arr);
	getprime(n,arr);
	getpalindrome(n,arr);
	getgreat(n,arr);
}
