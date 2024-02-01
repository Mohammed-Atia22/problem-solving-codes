#include<iostream>
using namespace std;

int main()
{
	long long a,i,fact=1,num;
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>num;
		if(num==0)
		{
			cout<<fact<<"\n";
		}
		else if(num>0)
		{
			for(int j=1;j<=num;j++)
		 {
			fact=fact*j;
		 }
		 cout<<fact<<"\n";
		 //fact2=fact;
		 fact=1;
		}
	}
//	cout<<fact2<<"\n";
//	cout<<fact2-fact<<"\n";
}
