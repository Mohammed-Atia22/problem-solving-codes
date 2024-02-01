#include<iostream>
using namespace std;
int main()
{
	int row,i,j,space;
	cin>>row;
	for(i=row;i>=1;i--)
			{	
				for(space=i;space<row;space++)
				{
					cout<<" ";
				}
				for(j=1;j<=(2*i-1);j++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
}
