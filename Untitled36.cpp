#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	c%2==0;
	cin>>a>>b;
	if((a>0&&b>0)&&((a%2==0&&b%2==0)&&(a%2==0&&b%2==0))&&(a==(b+1)||b==(a+1)))
	{
			cout<<"YES";
	}
//	else if(a==(b+1)||b==(a+1))
//    { 
//			cout<<"YES";
//	}
	else if(((a>0&&b>0)&&a==b)&&((a*2)%2==0&&(b*2)%2==0))
  { 
		cout<<"YES";
  }
	
	else
	cout<<"NO";
}
