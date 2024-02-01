#include<iostream>
using namespace std;

int main()
{
	char h;
	cin>>h;
	if(h>='A'&&h<='Z')
	{
		h=tolower(h);
		cout<<h;
	}
	else
	{
		h=toupper(h);
		cout<<h;
	}
	
}
