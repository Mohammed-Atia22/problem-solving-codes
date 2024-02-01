#include<iostream>
using namespace std;
void repeat(int m,char c)
{
	for(int j=0;j<m;j++)
	{
		cout<<c<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int m;
		char c;
		cin>>m>>c;
		repeat(m,c);
		cout<<endl;
	}
}
