#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string str1,str2;
		cin>>str1>>str2;
		int num1=0,num2=0,m=0;
		num1=str1.size();
		num2=str2.size();
		m=max(num1,num2);
		for(int j=0;j<m;j++)
		{
			if(j < num1)
			{
				cout<<str1[j];
			}
			if(j < num2)
			{
				cout<<str2[j];
			}
		}
		cout<<endl;
	}
}
