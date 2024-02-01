#include<bits/stdc++.h>
using namespace std;
double getavg(int num)
{
	double sum=0,avg=0;
	double numbers[num];
	for(int i=0;i<num;i++){
		cin>>numbers[i];
		sum+=numbers[i];
	}
	avg=sum/num;
	return avg;
}
int main(){
	int num;
	double res=0;
	cin>>num;
	cout<<fixed<<setprecision(7)<<getavg(num);
	
}
