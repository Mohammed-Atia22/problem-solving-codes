#include<iostream>
using namespace std;

int main()
{
	int num1,num2,max1,gdc=0,n1=0,n2=0,min1;
	cin>>num1>>num2;
	if(num1>num2)
	{
		max1=num1;
		min1=num2;
	}
	else
	{
		max1=num2;
		min1=num1;
	}
	for(int i=1;i<=max1;i++)
	{
		if(num1%i==0&&num2%i==0)
		{
			gdc=i;
		}
	}
	cout<<gdc<<endl;
}
