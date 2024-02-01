#include<iostream>

using namespace std;
	
	int main()
	{
		int a,i,m,max1=0;
		cin>>a;
		for(int i=0;i<a;i++)
		{
			cin>>m;
			if(m>max1)
			{
				max1=m;
			}
		}
		
			cout<<max1;
		
	}

