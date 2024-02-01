#include<iostream>
using namespace std;

int main()
{
	int a,b;
	char c;
	cin>>a>>c>>b;
	if(c=='>')
	{
		if(a>b)
		{
			cout<<"Right"<<endl;
		}
		else if(b>a)
		{
			cout<<"Wrong"<<endl;
		} 
		else if(a==b)
		{
			cout<<"Wrong"<<endl;
		}
		
	}
	else if(c=='<')
	{
		if(a>b)
		{
			cout<<"Wrong"<<endl;
		}
		else if(b>a)
		{
			cout<<"Right"<<endl;
		} 
		else if(a==b)
		{
			cout<<"Wrong"<<endl;
		}
	
	}	
		else if(c=='=')
	{
		if(a>b)
		{
			cout<<"Wrong"<<endl;
	    }
	    else if(b>a)
		{
			cout<<"Wrong"<<endl;
		} 
		else if(a==b)
		{
			cout<<"Right"<<endl;
		}
	}
	

}
