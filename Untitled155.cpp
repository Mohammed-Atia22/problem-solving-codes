#include<bits/stdc++.h>
using namespace std;
void getshift(long long int num1,int num2){
	int arr[num1];
	for(int i=0;i<num1;i++){
		cin>>arr[i];
	}
	int r=num2 % num1;
	int q=num1-1;
	for(int z=num1-r;z<num1;z++)
	{ 
		cout<<arr[z]<<" ";
	}
	for(int j=0;j<num1-r;j++){
		cout<<arr[j];
		if(j+1 < num1-r)
		{
			cout<<" ";
		}
	}
}
int main(){
	int num1 , num2;
	cin>>num1>>num2;
	getshift(num1,num2);
	
	
}
