#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x  ;
	cin>>x;
	if(x>1&&x<=1000)
	{   
		if(x%3==0&&x%5!=0)
		{
			cout<<"Fizz\n";
		 
		}

		 if(x%5==0&&x%3!=0)
		{
			cout<<"Buzz\n";
		}
		if(x%3==0&&x%5==0)
		{
			cout<<"Fizz Buzz\n";
		}
		
	}
	
	
	
}

